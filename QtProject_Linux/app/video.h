#ifndef VIDEO_H
#define VIDEO_H

#include <QDebug>
#include <QProcess>
#include <QBuffer>
#include <QTemporaryDir>
#include <QPainter>
#include <QReadWriteLock>

#include "opencv2/imgproc.hpp"
#include "ffmpeg.h"

#include "prefs.h"
#include "db.h"
#include "videometadata.h"
#include <QtCore/qmutex.h>

class Db;

class Video : public QObject
{
    Q_OBJECT

public:
    struct ProcessingResult {
        bool success;
        QString errorMsg; // Empty if success is true
        Video *video;
    };

public:
    Video(const Prefs &prefsParam, const QString &filenameParam);
    ~Video(); // Added missing destructor declaration
    ProcessingResult process();

    uint getProgress(){
        QMutexLocker locker(&progressLock);
        return progress;
    };

    VideoMetadata meta;
    QString _filePathName;
    QString nameInApplePhotos; // used externally only, as it is too slow to get at first
    int64_t size = 0; // in bytes
    QDateTime modified;
    QDateTime _fileCreateDate;
    int64_t duration = 0; // in miliseconds
    int bitrate = 0; // in kb/s
    double framerate = 0; // avg, in frames per second
    QString codec;
    QString audio;
    short width = 0;
    short height = 0;
    QByteArray thumbnail;
    cv::Mat grayThumb [2];
    uint64_t hash [2] = { 0, 0 };
    bool trashed = false;

    static VideoMetadata videoToMetadata(const Video& vid);

    QImage ffmpegLib_captureAt(const int percent, const int ofDuration=100);

private:
    // FIX: Removed duplicate declaration and added missing ones.
    const QString getMetadata(const QString &filename);
    void setProgress(uint p);
    const QString takeScreenCaptures(const Db &cache);
    QString internalProcess();
    void processThumbnail(QImage &thumbnail, const int &hashes);
    uint64_t computePhash(const cv::Mat &input) const;
    QImage minimizeImage(const QImage &image) const;
    QString msToHHMMSS(const int64_t &time) const;
    QImage getQImageFromFrame(const ffmpeg::AVFrame* pFrame) const;
    QImage ffmpegLib_captureThumbnail(ffmpeg::AVFormatContext *pFormatContext, ffmpeg::AVCodecContext *pCodecContext, int videoStream, int frame_number);
    QImage ffmpegLib_AVFrameToQImage(ffmpeg::AVFrame *pFrame) const;
    QImage opencv_captureAt(int ms);

    uint progress = 1;
    bool shouldStop = false;
    QMutex progressLock;

private:
    int _rotateAngle=0;

    static Prefs _prefs;
    static int _jpegQuality;

    static constexpr int _okJpegQuality      = 60;
    static constexpr int _lowJpegQuality     = 25;
    static constexpr int _hugeAmountVideos   = 200000;
    static constexpr int _goBackwardsPercent = 6;
    static constexpr int _videoStillUsable   = 90;
    static constexpr int _thumbnailMaxWidth  = 448;
    static constexpr int _thumbnailMaxHeight = 336;
    static constexpr int _pHashSize          = 32;
    static constexpr int _ssimSize           = 16;
    static constexpr int _almostBlackBitmap  = 1500;

signals:
    void progressChanged(int progress);

};

Q_DECLARE_METATYPE(Video::ProcessingResult);

#endif // VIDEO_H
