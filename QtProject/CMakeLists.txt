# --- Project Setup ---
cmake_minimum_required(VERSION 3.16)
project(video-simili-duplicate-cleaner VERSION 1.0 LANGUAGES CXX)

# --- CMake & C++ Configuration ---
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# --- Find System Dependencies ---
message(STATUS "Looking for required packages...")

# Find Qt6 and OpenCV using their standard CMake modules
find_package(Qt6 COMPONENTS Widgets Concurrent Sql REQUIRED)
find_package(OpenCV REQUIRED)

# Find FFmpeg using pkg-config, the standard for Linux libraries
find_package(PkgConfig REQUIRED)
pkg_check_modules(FFMPEG REQUIRED IMPORTED_TARGET libavcodec libavformat libavutil libswscale)

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
# Link against the imported targets and variables from find_package and pkg_check_modules
target_link_libraries(video-simili-duplicate-cleaner PRIVATE
    # Qt Modules
    Qt6::Widgets
    Qt6::Concurrent
    Qt6::Sql

    # OpenCV Libraries
    ${OpenCV_LIBS}

    # FFmpeg Libraries (from pkg-config)
    PkgConfig::FFMPEG
)

# --- Preprocessor Definitions ---
target_compile_definitions(video-simili-duplicate-cleaner PRIVATE
    APP_NAME="Video simili duplicate cleaner"
)

# --- Installation Rules ---
install(TARGETS video-simili-duplicate-cleaner
    RUNTIME DESTINATION bin
)
