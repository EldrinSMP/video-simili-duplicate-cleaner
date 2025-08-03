#include "video.h"
#include "prefs.h"
#include <QFileInfo>
#include <QDir>
#include <QDebug>
#include <QImage>
#include <QDateTime>
#include <QTimeZone>
#include <opencv2/opencv.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/imgproc.hpp>
#include <cmath>

extern "C" {
#include <libavutil/avutil.h>
#include <libavutil/channel_layout.h>
}

// Initialize static members
Prefs Video::_prefs;
int Video::_jpegQuality = _okJpegQuality;

// FIX 1: Corrected constructor to match video.h
Video::Video(const Prefs &prefsParam, const QString &filenameParam) : _filePathName(filenameParam)
{
    _prefs = prefsParam; // Assign to static member
    QFileInfo fi(filenameParam);
    this->size = fi.size();
    this->progress = 0;
    // These members are part of the VideoMetadata struct in video.h
    this->meta.ssim = -1;
    this->meta.corrupted = false;
}

Video::~Video()
{
}

// FIX 2: Implementation for the setProgress function declared in video.h
void Video::setProgress(uint p)
{
    QMutexLocker locker(&progressLock);
    if (this->progress != p) {
        this->progress = p;
        emit progressChanged(this->progress);
    }
}

const QString Video::getMetadata(const QString &fPath)
{
    ffmpeg::AVFormatContext *fmt_ctx = nullptr;
    if (ffmpeg::avformat_open_input(&fmt_ctx, fPath.toUtf8().constData(), nullptr, nullptr) < 0) {
        return "Could not open file";
    }

    if (ffmpeg::avformat_find_stream_info(fmt_ctx, nullptr) < 0) {
        ffmpeg::avformat_close_input(&fmt_ctx);
        return "Could not find stream information";
    }

    QString metadata_str; // Renamed to avoid conflict with class member
    ffmpeg::AVDictionaryEntry *entry = nullptr;
    // FIX 3: Cross-platform FFmpeg API compatibility
#if LIBAVUTIL_VERSION_MAJOR >= 57
    while ((entry = ffmpeg::av_dict_iterate(fmt_ctx->metadata, entry))) {
        metadata_str += QString("%1: %2\n").arg(entry->key).arg(entry->value);
    }
#else
    while ((entry = ffmpeg::av_dict_get(fmt_ctx->metadata, "", entry, AV_DICT_IGNORE_SUFFIX))) {
        metadata_str += QString("%1: %2\n").arg(entry->key).arg(entry->value);
    }
#endif

    for (unsigned int i = 0; i < fmt_ctx->nb_streams; i++) {
        ffmpeg::AVStream *as = fmt_ctx->streams[i];
        if (as->codecpar->codec_type == ffmpeg::AVMEDIA_TYPE_VIDEO) {
            metadata_str += QString("Video Stream: %1, %2x%3\n").arg(ffmpeg::avcodec_get_name(as->codecpar->codec_id)).arg(as->codecpar->width).arg(as->codecpar->height);
        } else if (as->codecpar->codec_type == ffmpeg::AVMEDIA_TYPE_AUDIO) {
            ffmpeg::AVCodecContext *audio_ctx = ffmpeg::avcodec_alloc_context3(nullptr);
            ffmpeg::avcodec_parameters_to_context(audio_ctx, as->codecpar);
            char buf[256];
#if LIBAVUTIL_VERSION_MAJOR >= 57
            ffmpeg::av_channel_layout_describe(&audio_ctx->ch_layout, buf, sizeof(buf));
            metadata_str += QString("Audio Stream: %1, %2, %3 Hz, ").arg(ffmpeg::avcodec_get_name(as->codecpar->codec_id)).arg(buf).arg(as->codecpar->sample_rate);
            if (audio_ctx->ch_layout.nb_channels == 1)
                metadata_str += "mono, ";
            else if (audio_ctx->ch_layout.nb_channels == 2)
                metadata_str += "stereo, ";
            const int bits_per_sample = ffmpeg::av_get_bits_per_sample(as->codecpar->codec_id);
            const int bitrate_val = bits_per_sample ? as->codecpar->sample_rate * (int64_t)audio_ctx->ch_layout.nb_channels * bits_per_sample/1000 : as->codecpar->bit_rate/1000;
#else
            ffmpeg::av_get_channel_layout_string(buf, sizeof(buf), audio_ctx->channels, audio_ctx->channel_layout);
            metadata_str += QString("Audio Stream: %1, %2, %3 Hz, ").arg(ffmpeg::avcodec_get_name(as->codecpar->codec_id)).arg(buf).arg(as->codecpar->sample_rate);
            if (audio_ctx->channels == 1)
                metadata_str += "mono, ";
            else if (audio_ctx->channels == 2)
                metadata_str += "stereo, ";
            const int bits_per_sample = ffmpeg::av_get_bits_per_sample(as->codecpar->codec_id);
            const int bitrate_val = bits_per_sample ? as->codecpar->sample_rate * (int64_t)audio_ctx->channels * bits_per_sample/1000 : as->codecpar->bit_rate/1000;
#endif
            metadata_str += QString("%1 kb/s\n").arg(bitrate_val);
            ffmpeg::avcodec_free_context(&audio_ctx);
        }
    }

    ffmpeg::avformat_close_input(&fmt_ctx);
    return metadata_str;
}


Video::ProcessingResult Video::process()
{
    setProgress(0);
    ffmpeg::AVFormatContext *pFormatContext = ffmpeg::avformat_alloc_context();
    if (ffmpeg::avformat_open_input(&pFormatContext, this->_filePathName.toStdString().c_str(), NULL, NULL) != 0)
    {
        this->meta.corrupted = true;
        this->meta.error_str = "Couldn't open input stream.";
        setProgress(100);
        return {false, this->meta.error_str, this};
    }
    if (ffmpeg::avformat_find_stream_info(pFormatContext, NULL) < 0)
    {
        this->meta.corrupted = true;
        this->meta.error_str = "Couldn't find stream information.";
        ffmpeg::avformat_close_input(&pFormatContext);
        setProgress(100);
        return {false, this->meta.error_str, this};
    }
    int videoStream = -1;
    for (unsigned int i = 0; i < pFormatContext->nb_streams; i++)
    {
        if (pFormatContext->streams[i]->codecpar->codec_type == ffmpeg::AVMEDIA_TYPE_VIDEO)
        {
            videoStream = i;
            break;
        }
    }
    if (videoStream == -1)
    {
        this->meta.corrupted = true;
        this->meta.error_str = "Couldn't find a video stream.";
        ffmpeg::avformat_close_input(&pFormatContext);
        setProgress(100);
        return {false, this->meta.error_str, this};
    }
    this->duration = pFormatContext->duration / AV_TIME_BASE;
    ffmpeg::AVCodecParameters *pCodecParameters = pFormatContext->streams[videoStream]->codecpar;
    const ffmpeg::AVCodec *pCodec = ffmpeg::avcodec_find_decoder(pCodecParameters->codec_id);
    if (pCodec == NULL)
    {
        this->meta.corrupted = true;
        this->meta.error_str = "Unsupported codec.";
        ffmpeg::avformat_close_input(&pFormatContext);
        setProgress(100);
        return {false, this->meta.error_str, this};
    }
    ffmpeg::AVCodecContext *pCodecContext = ffmpeg::avcodec_alloc_context3(pCodec);
    if (ffmpeg::avcodec_parameters_to_context(pCodecContext, pCodecParameters) < 0)
    {
        this->meta.corrupted = true;
        this->meta.error_str = "Couldn't copy codec context.";
        ffmpeg::avcodec_free_context(&pCodecContext);
        ffmpeg::avformat_close_input(&pFormatContext);
        setProgress(100);
        return {false, this->meta.error_str, this};
    }
    if (ffmpeg::avcodec_open2(pCodecContext, pCodec, NULL) < 0)
    {
        this->meta.corrupted = true;
        this->meta.error_str = "Couldn't open codec.";
        ffmpeg::avcodec_free_context(&pCodecContext);
        ffmpeg::avformat_close_input(&pFormatContext);
        setProgress(100);
        return {false, this->meta.error_str, this};
    }
    this->width = pCodecContext->width;
    this->height = pCodecContext->height;
    this->bitrate = pFormatContext->bit_rate / 1000;
    this->frames = pFormatContext->streams[videoStream]->nb_frames;
    if (this->frames == 0)
    {
        this->frames = this->duration * pFormatContext->streams[videoStream]->r_frame_rate.num / pFormatContext->streams[videoStream]->r_frame_rate.den;
    }
    this->thumbnail = ffmpegLib_captureThumbnail(pFormatContext, pCodecContext, videoStream, 10).bits();
    // this->meta.metadata = this->getMetadata(this->_filePathName); // This member doesn't exist in VideoMetadata
    ffmpeg::avcodec_free_context(&pCodecContext);
    ffmpeg::avformat_close_input(&pFormatContext);
    setProgress(100);
    return {true, "", this};
}

QImage Video::ffmpegLib_captureAt(const int percent, const int ofDuration)
{
    // This function needs to be re-implemented based on the correct class members
    return QImage();
}

QImage Video::ffmpegLib_captureThumbnail(ffmpeg::AVFormatContext *pFormatContext, ffmpeg::AVCodecContext *pCodecContext, int videoStream, int frame_number)
{
    int64_t timestamp = frame_number * pFormatContext->streams[videoStream]->time_base.den / pFormatContext->streams[videoStream]->time_base.num / av_q2d(pFormatContext->streams[videoStream]->r_frame_rate);
    av_seek_frame(pFormatContext, videoStream, timestamp, AVSEEK_FLAG_BACKWARD);

    ffmpeg::AVFrame *pFrame = ffmpeg::av_frame_alloc();
    ffmpeg::AVPacket packet;
    int ret;

    while (ffmpeg::av_read_frame(pFormatContext, &packet) >= 0) {
        if (packet.stream_index == videoStream) {
            ret = ffmpeg::avcodec_send_packet(pCodecContext, &packet);
            if (ret < 0) {
                break;
            }
            ret = ffmpeg::avcodec_receive_frame(pCodecContext, pFrame);
            if (ret == 0) {
                QImage img = getQImageFromFrame(pFrame);
                ffmpeg::av_frame_free(&pFrame);
                ffmpeg::av_packet_unref(&packet);
                return img;
            }
        }
        ffmpeg::av_packet_unref(&packet);
    }

    ffmpeg::av_frame_free(&pFrame);
    return QImage();
}


QImage Video::ffmpegLib_AVFrameToQImage(ffmpeg::AVFrame *pFrame)
{
    return getQImageFromFrame(pFrame);
}


QImage Video::opencv_captureAt(int ms)
{
    cv::VideoCapture cap(this->_filePathName.toStdString());
    if (!cap.isOpened())
    {
        this->meta.corrupted = true;
        this->meta.error_str = "Couldn't open video file with OpenCV.";
        return QImage();
    }
    cap.set(cv::CAP_PROP_POS_MSEC, ms);
    cv::Mat frame;
    cap >> frame;
    if (frame.empty())
    {
        this->meta.corrupted = true;
        this->meta.error_str = "Couldn't capture frame with OpenCV.";
        return QImage();
    }
    QImage img(frame.data, frame.cols, frame.rows, frame.step, QImage::Format_BGR888);
    return img.copy();
}

// Stub implementations for functions declared in the header but not yet fully implemented
const QString Video::takeScreenCaptures(const Db &cache) { return ""; }
QString Video::internalProcess() { return ""; }
void Video::processThumbnail(QImage &thumbnail, const int &hashes) {}
uint64_t Video::computePhash(const cv::Mat &input) const { return 0; }
QImage Video::minimizeImage(const QImage &image) const { return QImage(); }
QString Video::msToHHMMSS(const int64_t &time) const { return ""; }
QImage Video::getQImageFromFrame(const ffmpeg::AVFrame* pFrame) const { return QImage(); }
VideoMetadata Video::videoToMetadata(const Video& vid) { return VideoMetadata(); }
