# Video Simili Duplicate Detector Linux Recompilation Changelog

This log details the series of successful changes implemented to resolve persistent build and packaging errors for the "video-simili-duplicate-cleaner" project. The primary goal was to achieve a clean compile on a Linux build environment for AppImage creation while maintaining cross-platform compatibility for Arch Linux (PKGBUILD).

---

## Build System (`CMakeLists.txt`)

The build script underwent several revisions to correctly handle dependencies in a robust, cross-platform manner.

* **Standardized Dependency Finding:** Reverted from hardcoded paths and manual `find_*` commands to the modern, standard CMake approach.
    * `find_package()` is now used for Qt (`Qt6`) and OpenCV, leveraging their official CMake support modules.
    * `pkg_check_modules()` is used for FFmpeg, which is the standard, portable way to find C-based libraries on Linux systems like Arch and Ubuntu.
* **Explicit Include Directories:** Added `target_include_directories( ... ${FFMPEG_INCLUDE_DIRS})` to ensure the compiler was explicitly given the path to the FFmpeg headers found by `pkg-config`. This was a critical step to resolve the compilation errors.

---

## C++ Source Code

Significant changes were made to resolve compilation errors caused by header conflicts and API mismatches.

* **Corrected FFmpeg Header Management (`ffmpeg.h`):** The primary C++ fix was to centralize all FFmpeg includes within a single `ffmpeg.h` header.
    * This file correctly wraps the C headers in an `extern "C"` block to ensure proper linkage with C++ code.
    * The `extern "C"` block was placed inside a `ffmpeg` namespace to prevent polluting the global namespace and avoid symbol conflicts.
* **Cleaned `video.cpp`:** Removed the redundant and incorrectly ordered `extern "C"` block from the `.cpp` file. The code now correctly relies on `#include "video.h"` (which includes `ffmpeg.h`) to provide all necessary FFmpeg definitions in the proper order and namespace.
* **`const`-Correctness (`video.h`):** The `ffmpegLib_AVFrameToQImage` function was correctly declared as `const` in `video.h` since it does not modify the state of the `Video` object. This resolved a `const`-correctness error during compilation.

---

## Build Environment & AppImage Packaging

The final set of issues was related to the build environment and the AppImage creation tool.

* **Identified Missing Dependencies:** The root cause of the persistent FFmpeg build errors was discovered to be missing development libraries on the build VM. The issue was resolved by installing the complete set of required packages (`libavformat-dev`, `libopencv-dev`, `libgl-dev`, etc.).
* **Created `.desktop` File and Icon:** Added a standard `video-simili-duplicate-cleaner.desktop` file and a corresponding `.png` icon in the `usr/share/applications` and `usr/share/icons` directories, respectively. This resolved the `linuxdeployqt` error about missing metadata.
* **Resolved `linuxdeployqt` Dependency Error:** Worked around a `linuxdeployqt` tool-specific error where it would fail on a missing dependency (`libmimerapi.so`) for an unused Qt plugin (`libqsqlmimer.so`). The solution was to create a temporary, empty "dummy" library to satisfy the tool's dependency check, allowing the AppImage creation to complete.
