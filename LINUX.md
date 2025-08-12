# Build from Source: Linux

## Ubuntu / Mint / Debian Based

### DEB File

From the release page of the repository <https://github.com/EldrinSMP/video-simili-duplicate-cleaner/releases> download the `.deb` from the most recent release. Run:

    > `sudo apt install /path/to/your/package-file.deb`

Apt will install Video Simili Duplicate Cleaner and all required dependencies to your system.

### Build From Source

1. Install Dependencies
Open a terminal and run the following command to install all the necessary tools and libraries:

    > `sudo apt update && sudo apt install -y git build-essential cmake pkg-config qt6-base-dev libopencv-dev libavformat-dev libavcodec-dev libavutil-dev libswscale-dev`

2. Clone the repository
Choose directory to house the repository and from that directory run:

    > ```
    > git clone https://github.com/eldrinsmp/video-simili-duplicate-cleaner.git
    > cd video-simili-duplicate-cleaner/QtProject_Linux/
    > ```

This will take you into the project directory of the local repository.

3. Create a build directory
Create a directory in which to build the package and switch to it.

    > `mkdir build && cd build`

4. Configure the project with CMake
This package is coded and setup to compile with CMAKE. Configure the project by executing the following command once you are in the build directory.

    > `cmake .. -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=/usr/local`

5. Compile the application
While still in the build directory, execute the following command:

    > `cmake --build .`

5. Install the application
After the build is complete, execute the following command:

    > `sudo cmake --install .`

Once completed, Video Simili Duplicate Cleaner will be installed on your system. The cloned directory can be removed without issue after installation.

---

## Fedora Based

### RPM File

From the release page of the repository <https://github.com/EldrinSMP/video-simili-duplicate-cleaner/releases> download the `.rpm` from the most recent release. Run:

    > `sudo dnf install /path/to/your/package-file.rpm`

DNF will install Video Simili Duplicate Cleaner and all required dependencies to your system.

### Build From Source

1. Install Dependencies
Open a terminal and run the following command to install all the necessary tools and libraries:

    > `sudo dnf install -y git cmake gcc-c++ qt6-qtbase-devel opencv-devel ffmpeg-devel`

2. Clone the repository
Choose directory to house the repository and from that directory run:

    > ```
    > git clone https://github.com/eldrinsmp/video-simili-duplicate-cleaner.git
    > cd video-simili-duplicate-cleaner/QtProject_Linux/
    > ```

This will take you into the project directory of the local repository.

3. Create a build directory
Create a directory in which to build the package and switch to it.

    > `mkdir build && cd build`

4. Configure the project with CMake
This package is coded and setup to compile with CMAKE. Configure the project by executing the following command once you are in the build directory.

    > `cmake .. -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=/usr/local`

5. Compile the application
While still in the build directory, execute the following command:

    > `cmake --build .`

5. Install the application
After the build is complete, execute the following command:

    > `sudo cmake --install .`

Once completed, Video Simili Duplicate Cleaner will be installed on your system. The cloned directory can be removed without issue after installation.

---

## Arch Linux

### Archive / Portable App

From the release page of the repository <https://github.com/EldrinSMP/video-simili-duplicate-cleaner/releases> download the `.tar.xz` archive from the most recent release. Extract the directory to whereever you keep portable apps. From the `video-simili-duplicate-cleaner` directory, give the binary executable permissions with `chmod +x video-simili-duplicate-cleaner`. To run the program type either `./video-simili-duplicate-cleaner` or double click the file in your file manager.

### Packman Package Install

From the release page of the repository <https://github.com/EldrinSMP/video-simili-duplicate-cleaner/releases> download the `pkg.tar.zst` file and run:

    > `sudo pacman -U /path/to/your/package-file.pkg.tar.zst` 

Pacman will install Video Simili Duplicate Cleaner and all required dependencioes to your system. Follow the link to review the [PKGBUILD](https://github.com/EldrinSMP/video-simili-duplicate-cleaner/blob/4995e70011f15ef350e254d5f6af3aa83a4aa005/QtProject_Linux/PKGBUILD) for the package.

### MakePKG from source

1. Clone the repository
Choose directory to house the repository and from that directory run:

    > ```
    > git clone https://github.com/eldrinsmp/video-simili-duplicate-cleaner.git
    > cd video-simili-duplicate-cleaner/QtProject_Linux/
    > ```

This will take you into the project directory of the local repository.

2. Build and install
Enter the following command:

    > `makepkg -si`

Where `-s` handles your dependencies and `-i` installs the package after building. Pacman will download a fresh clone of the repository as well as any needed dependencies, build the project and install it to your system. The original cloned directory can be removed after installation.

### Build From Source

1. Install Dependencies
Open a terminal and run the following command to install all the necessary tools and libraries:

    > `sudo pacman -Syu --needed git cmake qt6-base opencv ffmpeg`

2. Clone the repository
Choose directory to house the repository and from that directory run:

    > ```
    > git clone https://github.com/eldrinsmp/video-simili-duplicate-cleaner.git
    > cd video-simili-duplicate-cleaner/QtProject_Linux/
    > ```

This will take you into the project directory of the local repository.

3. Create a build directory
Create a directory in which to build the package and switch to it.

    > `mkdir build && cd build`

4. Configure the project with CMake
This package is coded and setup to compile with CMAKE. Configure the project by executing the following command once you are in the build directory.

    > `cmake .. -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=/usr/local`

5. Compile the application
While still in the build directory, execute the following command:

    > `cmake --build .`

5. Install the application
After the build is complete, execute the following command:

    > `sudo cmake --install .`

Once completed, Video Simili Duplicate Cleaner will be installed on your system. The cloned directory can be removed without issue after installation.
