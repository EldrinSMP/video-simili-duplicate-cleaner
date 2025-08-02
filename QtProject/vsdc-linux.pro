# Qt Modules
QT += core gui widgets sql concurrent

# Project Configuration
CONFIG += c++17
TARGET = vsdc-linux
TEMPLATE = app

# Preprocessor Definitions
DEFINES += APP_NAME=\\\"Video\\ simili\\ duplicate\\ cleaner\\\"

# --- Custom FFmpeg Library ---
INCLUDEPATH += /home/eldrinsmp/GitHub/vsdc/QtProject/libraries/linux/ffmpeg/include
LIBS += -L/home/eldrinsmp/GitHub/vsdc/QtProject/libraries/linux/ffmpeg/lib -lavcodec -lavformat -lavutil -lswscale

# --- System-Installed OpenCV ---
CONFIG += link_pkgconfig
PKGCONFIG += opencv4

# --- Project Source Files ---
SOURCES += \
    app/main.cpp \
    app/mainwindow.cpp \
    app/comparison.cpp \
    app/video.cpp \
    app/videoprocessingpool.cpp \
    app/db.cpp \
    app/ssim.cpp

HEADERS += \
    app/mainwindow.h \
    app/comparison.h \
    app/video.h \
    app/videoprocessingpool.h \
    app/db.h \
    app/prefs.h

FORMS += \
    app/mainwindow.ui \
    app/comparison.ui

RESOURCES += \
    app/files.qrc
