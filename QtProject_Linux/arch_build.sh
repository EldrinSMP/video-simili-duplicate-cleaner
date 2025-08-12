#!/bin/bash
#
# This script automates the build and packaging process for
# video-simili-duplicate-cleaner on Arch Linux.
#
# It performs the following steps:
# 1. Cleans up artifacts from previous builds.
# 2. Configures the project using CMake in Release mode.
# 3. Compiles the application.
# 4. Creates .deb and .rpm packages using CPack.
# 5. Creates an Arch Linux package using makepkg.

# Exit immediately if a command exits with a non-zero status.
set -e

# --- Configuration ---
# Get the absolute path to the directory where this script is located
SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

# Define build and package directories using absolute paths
BUILD_DIR="$SCRIPT_DIR/build/release"
PACKAGE_DIR="$SCRIPT_DIR/release_files"
SRC_DIR="$SCRIPT_DIR/src"
PKG_DIR="$SCRIPT_DIR/pkg"

echo "==============================================="
echo "Build Directory: $BUILD_DIR"
echo "Package Output Directory: $PACKAGE_DIR"
echo "==============================================="

# --- 1. Clean Up Previous Builds ---
echo ""
echo ">>> Step 1: Cleaning up previous build artifacts..."
rm -rf "$BUILD_DIR"
rm -rf "$PACKAGE_DIR"
rm -rf "$SRC_DIR"
rm -rf "$PKG_DIR"
echo "Cleanup complete."

# --- 2. Configure ---
echo ""
echo ">>> Step 2: Configuring project with CMake..."
# Create the directories
mkdir -p "$BUILD_DIR"
mkdir -p "$PACKAGE_DIR"

# Configure the project, telling CPack where to place the final packages
cmake -S "$SCRIPT_DIR" -B "$BUILD_DIR" \
      -DCMAKE_BUILD_TYPE=Release \
      -DCMAKE_INSTALL_PREFIX=/usr \
      -DCPACK_OUTPUT_FILE_PREFIX="$PACKAGE_DIR"

# --- 3. Build ---
echo ""
echo ">>> Step 3: Building project..."
cmake --build "$BUILD_DIR"

# --- 4. Generate DEB and RPM Packages ---
echo ""
echo ">>> Step 4: Generating .deb and .rpm packages with CPack..."
# Run cpack from the build directory
cpack --config "$BUILD_DIR/CPackConfig.cmake"

# --- 5. Generate Arch Linux Package ---
echo ""
echo ">>> Step 5: Generating Arch Linux package with makepkg..."
# Use PKGDEST to specify the output directory for makepkg
# The -c flag cleans up the src/ and pkg/ directories after the build
PKGDEST="$PACKAGE_DIR" makepkg -sc

# --- 6. Final Cleanup ---
echo ""
echo ">>> Step 6: Cleaning up temporary CPack directory..."
rm -rf "$SCRIPT_DIR/_CPack_Packages"
rm -rf "$SCRIPT_DIR/video-simili-duplicate-cleaner/"
echo "Cleanup complete."

echo ""
echo "==============================================="
echo "Build and packaging complete!"
echo "Packages are located in: $PACKAGE_DIR"
echo "==============================================="
