# --- Project Setup ---
cmake_minimum_required(VERSION 3.16)
project(video-simili-duplicate-cleaner VERSION 1.0 LANGUAGES CXX)

# --- CMake & C++ Configuration ---
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# --- Build Options ---
# ADDED: This option creates a switch for the PKGBUILD to toggle off the
# use of bundled libraries, forcing it to use system libraries instead.
# The default is ON for normal development builds in Qt Creator.
option(USE_BUNDLED_LIBS "Use the pre-compiled libraries bundled with the source" ON)

# --- Find System Dependencies ---
find_package(Qt6 COMPONENTS Widgets Concurrent Sql REQUIRED)

# --- Find Libraries via Pkg-Config ---
find_package(PkgConfig REQUIRED)

# MODIFIED: This entire block is now conditional. It will only run for your
# development builds, and will be skipped during the PKGBUILD process.
if(USE_BUNDLED_LIBS)
    message(STATUS "Using bundled FFmpeg and OpenCV libraries.")
    set(FFMPEG_PC_PATH ${PROJECT_SOURCE_DIR}/libraries/linux/ffmpeg/lib/pkgconfig)
    set(OPENCV_PC_PATH ${PROJECT_SOURCE_DIR}/libraries/linux/opencv/lib/pkgconfig)
    set(ENV{PKG_CONFIG_PATH} "${FFMPEG_PC_PATH}:${OPENCV_PC_PATH}:$ENV{PKG_CONFIG_PATH}")
else()
    message(STATUS "Using system FFmpeg and OpenCV libraries.")
endif()

pkg_check_modules(FFMPEG REQUIRED IMPORTED_TARGET libavcodec libavformat libavutil libswscale)
pkg_check_modules(OpenCV REQUIRED IMPORTED_TARGET opencv4)

# --- Define Application Target ---
add_executable(video-simili-duplicate-cleaner
    app/main.cpp
    app/mainwindow.cpp app/mainwindow.h app/mainwindow.ui
    app/comparison.cpp app/comparison.h app/comparison.ui
    app/video.cpp app/video.h
    app/videoprocessingpool.cpp app/videoprocessingpool.h
    app/db.cpp app/db.h
    app/ssim.cpp
    app/prefs.h
    app/files.qrc
)

# --- Link Libraries ---
target_link_libraries(video-simili-duplicate-cleaner PRIVATE
    Qt6::Widgets
    Qt6::Concurrent
    Qt6::Sql
    PkgConfig::FFMPEG
    PkgConfig::OpenCV
)

# --- Preprocessor Definitions ---
target_compile_definitions(video-simili-duplicate-cleaner PRIVATE
    APP_NAME="Video simili duplicate cleaner"
)

# --- Installation Rules ---
install(TARGETS video-simili-duplicate-cleaner
    RUNTIME DESTINATION bin
)
