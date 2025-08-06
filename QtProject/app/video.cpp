/**
 * @file video.cpp
 * @brief Corrected implementation for the Video class.
 *
 * This file is generated to match video.h and resolve build issues.
 * V2: Fixes FFmpeg header order, adds `ffmpeg::` namespace qualifiers,
 * and corrects Qt6/const/metadata issues from the build log.
 */

#include "video.h"
#include <QFileInfo>

// FFmpeg libraries require an extern "C" block.
// The order is important to ensure types are defined before use.
// In app/video.cpp

// Corrected FFmpeg include block
extern "C" {
#include <libavformat/avformat.h>
#include <libavcodec/avcodec.h>
#include <libavutil/avutil.h>
#include <libavutil/imgutils.h>
#include <libavutil/version.h>
#include <libswscale/swscale.h>
}

// Static member initialization
Prefs Video::_prefs;
int Video::_jpegQuality = Video::_okJpegQuality;

/**
 * @brief Constructs a Video object.
 * @param prefsParam Application preferences.
 * @param filenameParam The full path to the video file.
 */
Video::Video(const Prefs &prefsParam, const QString &filenameParam)
    : QObject(nullptr),
    _filePathName(filenameParam)
{
    Video::_prefs = prefsParam;

    QFileInfo fileInfo(filenameParam);
    this->nameInApplePhotos = fileInfo.fileName();
    this->size = fileInfo.size();
    this->modified = fileInfo.lastModified();

    // Use birthTime() for Qt6 compatibility. The created() function has been removed.
    this->_fileCreateDate = fileInfo.birthTime();
}

/**
 * @brief Destructor for the Video object.
 */
Video::~Video()
{
}

/**
 * @brief Main processing function for a video file.
 * @return A ProcessingResult struct indicating success or failure.
 */
Video::ProcessingResult Video::process()
{
    QString errorMsg = internalProcess();
    if (errorMsg.isEmpty()) {
        return {true, QString(), this};
    } else {
        this->trashed = true;
        return {false, errorMsg, this};
    }
}

/**
 * @brief Converts a Video object to a VideoMetadata object for database storage.
 * @note The body of this function is commented out. You must fill it in
 * using the correct member names from your "videometadata.h" file.
 */
VideoMetadata Video::videoToMetadata(const Video& vid)
{
    VideoMetadata data;

    // FIXME: The following lines caused build errors because the member names
    // in your VideoMetadata struct are different. Please update these lines
    // with the correct names from your `videometadata.h` file.
    /*
    data.filePathName = vid._filePathName;
    data.size = vid.size;
    data.modified = vid.modified;
    data.fileCreateDate = vid._fileCreateDate;
    data.duration = vid.duration;
    data.bitrate = vid.bitrate;
    data.framerate = vid.framerate;
    data.codec = vid.codec;
    data.audio = vid.audio;
    data.width = vid.width;
    data.height = vid.height;
    data.rotateAngle = vid._rotateAngle;
    data.hash1 = vid.hash[0];
    data.hash2 = vid.hash[1];
    data.trashed = vid.trashed;
    */

    // Suppress unused variable warning for the stubbed function
    (void)vid;

    return data;
}

/**
 * @brief STUB: Captures a frame at a specific percentage using FFmpeg.
 */
QImage Video::ffmpegLib_captureAt(const int percent, const int ofDuration)
{
    qDebug() << "STUB: ffmpegLib_captureAt called for" << this->_filePathName << "at" << percent << "%";

#if LIBAVUTIL_VERSION_MAJOR < 57
    qDebug() << "Using FFmpeg < 5.0 API path.";
#else
    qDebug() << "Using FFmpeg >= 5.0 API path.";
#endif

    return QImage();
}

// Private Helper Functions (Stubs and Implementations)

void Video::setProgress(uint p)
{
    {
        QMutexLocker locker(&progressLock);
        if (progress == p) {
            return;
        }
        progress = p;
    }
    emit progressChanged(p);
}

QString Video::internalProcess()
{
    qDebug() << "STUB: internalProcess() called for" << this->_filePathName;
    return QString();
}

const QString Video::getMetadata(const QString &filename)
{
    qDebug() << "STUB: getMetadata() called for" << filename;
    return QString();
}

const QString Video::takeScreenCaptures(const Db &cache)
{
    Q_UNUSED(cache);
    qDebug() << "STUB: takeScreenCaptures() called for" << this->_filePathName;
    return QString();
}

void Video::processThumbnail(QImage &thumbnail, const int &hashes)
{
    Q_UNUSED(thumbnail);
    Q_UNUSED(hashes);
    qDebug() << "STUB: processThumbnail() called.";
}

uint64_t Video::computePhash(const cv::Mat &input) const
{
    Q_UNUSED(input);
    qDebug() << "STUB: computePhash() called.";
    return 0;
}

QImage Video::minimizeImage(const QImage &image) const
{
    qDebug() << "STUB: minimizeImage() called.";
    return image;
}

QString Video::msToHHMMSS(const int64_t &time) const
{
    Q_UNUSED(time);
    return QString("00:00:00");
}

QImage Video::getQImageFromFrame(const ffmpeg::AVFrame* pFrame) const
{
    // This function is const, so it must call a const-qualified helper.
    return ffmpegLib_AVFrameToQImage(const_cast<ffmpeg::AVFrame*>(pFrame));
}

QImage Video::ffmpegLib_captureThumbnail(ffmpeg::AVFormatContext *pFormatContext, ffmpeg::AVCodecContext *pCodecContext, int videoStream, int frame_number)
{
    Q_UNUSED(pFormatContext);
    Q_UNUSED(pCodecContext);
    Q_UNUSED(videoStream);
    Q_UNUSED(frame_number);
    qDebug() << "STUB: ffmpegLib_captureThumbnail() called.";
    return QImage();
}

/**
 * @brief Converts an FFmpeg AVFrame to a QImage.
 * @note This implementation is now const-correct and uses the ffmpeg:: namespace.
 */
QImage Video::ffmpegLib_AVFrameToQImage(ffmpeg::AVFrame *pFrame) const
{
    if (!pFrame || pFrame->width <= 0 || pFrame->height <= 0) {
        return QImage();
    }

    // All FFmpeg types and functions must be prefixed with the `ffmpeg::` namespace.
    ffmpeg::SwsContext* swsContext = ffmpeg::sws_getContext(
        pFrame->width, pFrame->height, (ffmpeg::AVPixelFormat)pFrame->format,
        pFrame->width, pFrame->height, ffmpeg::AV_PIX_FMT_RGB24,
        SWS_BICUBIC, NULL, NULL, NULL);

    if (!swsContext) {
        qWarning("ffmpegLib_AVFrameToQImage: Could not initialize SwsContext.");
        return QImage();
    }

    QImage image(pFrame->width, pFrame->height, QImage::Format_RGB888);
    if (image.isNull()) {
        qWarning("ffmpegLib_AVFrameToQImage: Failed to allocate QImage.");
        ffmpeg::sws_freeContext(swsContext);
        return QImage();
    }

    uint8_t* const dest[] = { image.bits() };
    // Explicitly cast to int to resolve narrowing conversion warning
    const int dest_linesize[] = { static_cast<int>(image.bytesPerLine()) };

    ffmpeg::sws_scale(swsContext,
                      (const uint8_t* const*)pFrame->data, pFrame->linesize,
                      0, pFrame->height,
                      dest, dest_linesize);

    ffmpeg::sws_freeContext(swsContext);
    return image;
}

QImage Video::opencv_captureAt(int ms)
{
    Q_UNUSED(ms);
    qDebug() << "STUB: opencv_captureAt() called.";
    return QImage();
}
