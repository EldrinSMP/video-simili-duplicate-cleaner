# Installation Instructions: Linux

## Ubuntu / Mint / Debian Based

### DEB File

From the release page of the repository <https://github.com/EldrinSMP/video-simili-duplicate-cleaner/releases> download the `.deb` from the most recent release. Run:

    sudo apt install /path/to/your/package-file.deb

Apt will install Video Simili Duplicate Cleaner and all required dependencies to your system.

### Build From Source
From your terminal:

> 1. Install Dependencies
>    ```
>    sudo apt update && sudo apt install -y git build-essential cmake pkg-config qt6-base-dev libopencv-dev libavformat-dev libavcodec-dev libavutil-dev libswscale-dev
>    ```
>
> 2. Clone the repository
>    ```
>    git clone <https://github.com/eldrinsmp/video-simili-duplicate-cleaner.git>
>    cd video-simili-duplicate-cleaner/QtProject_Linux/
>    ```
>
> 3. Create a build directory
>    ```
>    mkdir build && cd build
>    ```
>
> 4. Configure the project with CMake
>    ```
>    cmake .. -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=/usr/local
>    ```
>
> 5. Compile the application
>    ```
>    cmake --build .
>    ```
>
> 6. Install the application
>    ```
>    sudo cmake --install .
>    ```

Once completed, Video Simili Duplicate Cleaner will be installed on your system. The cloned directory can be removed without issue after installation.

---

## Fedora Based

### RPM File

From the release page of the repository <https://github.com/EldrinSMP/video-simili-duplicate-cleaner/releases> download the `.rpm` from the most recent release. Run:

    sudo dnf install /path/to/your/package-file.rpm

DNF will install Video Simili Duplicate Cleaner and all required dependencies to your system.

### Build From Source
From your terminal:

> 1. Install Dependencies
>    ```
>    sudo dnf install -y git cmake gcc-c++ qt6-qtbase-devel opencv-devel ffmpeg-devel
>    ```
>
> 2. Clone the repository
>    ```
>    git clone <https://github.com/eldrinsmp/video-simili-duplicate-cleaner.git>
>    cd video-simili-duplicate-cleaner/QtProject_Linux/
>    ```
>
> 3. Create a build directory
>    ```
>    mkdir build && cd build
>    ```
>
> 4. Configure the project with CMake
>    ```
>    cmake .. -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=/usr/local
>    ```
>
> 5. Compile the application
>    ```
>    cmake --build .
>    ```
>
> 6. Install the application
>    ```
>    sudo cmake --install .
>    ```

Once completed, Video Simili Duplicate Cleaner will be installed on your system. The cloned directory can be removed without issue after installation.

---

## Arch Linux

### Archive / Portable App

From the release page of the repository <https://github.com/EldrinSMP/video-simili-duplicate-cleaner/releases> download the `.tar.xz` archive from the most recent release. Extract the directory to whereever you keep portable apps. From the `video-simili-duplicate-cleaner` directory, give the binary executable permissions with `chmod +x video-simili-duplicate-cleaner`. To run the program type either `./video-simili-duplicate-cleaner` or double click the file in your file manager.

### Packman Package Install

From the release page of the repository <https://github.com/EldrinSMP/video-simili-duplicate-cleaner/releases> download the `pkg.tar.zst` file and run:

    sudo pacman -U /path/to/your/package-file.pkg.tar.zst

Pacman will install Video Simili Duplicate Cleaner and all required dependencioes to your system. Follow the link to review the [PKGBUILD](https://github.com/EldrinSMP/video-simili-duplicate-cleaner/blob/4995e70011f15ef350e254d5f6af3aa83a4aa005/QtProject_Linux/PKGBUILD) for the package.

### MakePKG from source
From your terminal:

> 1. Clone the repository
>    ```
>    git clone https://github.com/eldrinsmp/video-simili-duplicate-cleaner.git
>    cd video-simili-duplicate-cleaner/QtProject_Linux/
>    ```
>
> 2. Build and install
>    ```
>    makepkg -si
>    ```
>
>    Where `-s` handles your dependencies and `-i` installs the package after building. Pacman will download a fresh clone of the repository as well as any needed dependencies, build the project and install it to your system. The original cloned directory can be removed after installation.

### Build From Source
From your terminal:

> 1. Install Dependencies
>    ```
>    sudo pacman -Syu --needed git cmake qt6-base opencv ffmpeg
>    ```
>
> 2. Clone the repository
>    ```
>    git clone <https://github.com/eldrinsmp/video-simili-duplicate-cleaner.git>
>    cd video-simili-duplicate-cleaner/QtProject_Linux/
>    ```
>
> 3. Create a build directory
>    ```
>    mkdir build && cd build
>    ```
>
> 4. Configure the project with CMake
>    ```
>    cmake .. -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=/usr/local
>    ```
>
> 5. Compile the application
>    ```
>    cmake --build .
>    ```
>
> 6. Install the application
>    ```
>    sudo cmake --install .
>    ```

Once completed, Video Simili Duplicate Cleaner will be installed on your system. The cloned directory can be removed without issue after installation.
