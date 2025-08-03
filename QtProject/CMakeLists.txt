# --- Project Setup ---
cmake_minimum_required(VERSION 3.16)
project(video-simili-duplicate-cleaner VERSION 1.0 LANGUAGES CXX)

# --- CMake & C++ Configuration ---
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# --- Find System Dependencies ---
find_package(Qt6 COMPONENTS Widgets Concurrent Sql REQUIRED)

# --- Find Bundled Libraries via Pkg-Config ---
find_package(PkgConfig REQUIRED)
set(FFMPEG_PC_PATH ${PROJECT_SOURCE_DIR}/libraries/linux/ffmpeg/lib/pkgconfig)
set(OPENCV_PC_PATH ${PROJECT_SOURCE_DIR}/libraries/linux/opencv/lib/pkgconfig)
set(ENV{PKG_CONFIG_PATH} "${FFMPEG_PC_PATH}:${OPENCV_PC_PATH}:$ENV{PKG_CONFIG_PATH}")
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

# --- Configure Include Directories ---
# Explicitly add the autogen directory to ensure ui_*.h files are found.
target_include_directories(video-simili-duplicate-cleaner PRIVATE
    ${CMAKE_CURRENT_BINARY_DIR}/video-simili-duplicate-cleaner_autogen/include
)

# --- Link Libraries ---
target_link_libraries(video-simili-duplicate-cleaner PRIVATE
    # Qt Modules
    Qt6::Widgets
    Qt6::Concurrent
    Qt6::Sql

    # Pkg-Config Targets (these contain all necessary flags)
    PkgConfig::FFMPEG
    PkgConfig::OpenCV
)

# --- Preprocessor Definitions ---
target_compile_definitions(video-simili-duplicate-cleaner PRIVATE
    APP_NAME="Video simili duplicate cleaner"
)
