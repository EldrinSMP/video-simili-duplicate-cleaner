# CMakeLists.txt

cmake_minimum_required(VERSION 3.16)

# Use an environment variable for the version, with a fallback for local builds
if(DEFINED ENV{CI_PACKAGE_VERSION})
    set(PACKAGE_VERSION "$ENV{CI_PACKAGE_VERSION}")
else()
    set(PACKAGE_VERSION "1.13.0") # Corrected fallback version
endif()

# Standardize the project name
project(video-simili-duplicate-cleaner VERSION ${PACKAGE_VERSION})

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 COMPONENTS Core Gui Widgets REQUIRED)
find_package(OpenCV REQUIRED)
find_package(PkgConfig REQUIRED)
pkg_check_modules(FFMPEG REQUIRED libavcodec libavformat libavutil libswscale)

set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} "${Qt6_DIR}")

add_executable(${PROJECT_NAME}
    app/main.cpp
    app/mainwindow.h
    app/mainwindow.cpp
    app/mainwindow.ui
    app/comparison.h
    app/comparison.cpp
    app/video.h
    app/video.cpp
    app/videoprocessingpool.h
    app/videoprocessingpool.cpp
    app/db.h
    app/db.cpp
    app/ssim.h # <-- This was the missing file
    app/ssim.cpp
    app/files.qrc
)

target_link_libraries(${PROJECT_NAME}
    Qt6::Core
    Qt6::Gui
    Qt6::Widgets
    ${OpenCV_LIBS}
    ${FFMPEG_LIBRARIES}
)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)

# CPack configuration for DEB and RPM
set(CPACK_PACKAGE_NAME ${PROJECT_NAME})
set(CPACK_PACKAGE_VERSION ${PACKAGE_VERSION})
# The architecture will be set in the workflow for aarch64 builds
set(CPACK_PACKAGE_ARCHITECTURE "x86_64")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "EldrinSMP")
set(CPACK_RPM_PACKAGE_RELEASE 1)
set(CPACK_GENERATOR "DEB;RPM")

include(CPack)

