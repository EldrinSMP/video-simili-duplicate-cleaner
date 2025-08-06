/**
 * @file video.cpp
 * @brief Corrected implementation for the Video class.
 *
 * V3: Removes the conflicting extern "C" block for FFmpeg headers,
 * as they are already correctly included via video.h. Ensures
 * consistent use of the `ffmpeg::` namespace for all types.
 */

#include "video.h"
#include <QFileInfo>

//
// The extern "C" block for FFmpeg headers has been REMOVED.
// The correct headers are already included via "video.h" -> "ffmpeg.h",
// which properly wraps them in the `ffmpeg` namespace.
//

// Static member initialization
Prefs Video::_prefs;
int Video::_jpegQuality = Video::_okJpegQuality;

/**
 * @brief Constructs a Video object.
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
 */
VideoMetadata Video::videoToMetadata(const Video& vid)
{
    VideoMetadata data;
    // Suppress unused variable warning for this stubbed function
    (void)vid;
    // FIXME: Fill this in with the correct member names from videometadata.h
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
        if (progress == p) return;
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
 */
QImage Video::ffmpegLib_AVFrameToQImage(ffmpeg::AVFrame *pFrame) const
{
    if (!pFrame || pFrame->width <= 0 || pFrame->height <= 0) {
        return QImage();
    }

    // Consistently use the ffmpeg:: namespace for all types and functions
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
