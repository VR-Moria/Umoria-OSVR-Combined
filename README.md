
# VR-Moria
Expanding on existing software to create an immersive experience for the much-loved dungeon crawler simulation Umoria. Inspired by Lord of the Ring’s Mines of Moria, Umoria provides many adventures we hope to bring to life using Open Source Virtual Reality (OSVR).

# Getting Started
## Prerequisite Software
### CMake 
View installation instructions on the official website: https://cmake.org/install/

### Visual Studio 2019 (or earlier version) for C++
Download an installer here: https://visualstudio.microsoft.com/downloads/
(Be sure that it supports C++ development)

### Boost C++ Libraries 
(For windows) download and run a boost installer exe here: https://sourceforge.net/projects/boost/files/boost-binaries/1.74.0/ 

### PDCurses 
1. Clone the PDCurses git repo on to your system: https://github.com/wmcbrine/PDCurses
2. run x64 Native Tools Command Prompt for VS 2019 admin
3. in the PDCurses directory, navigate to wincon directory. Inside, make a build dir
4. navigate (cd) to build dir, and use following command to perform build: $ nmake -f ../MakeFile.vc PDCURSES_SRCDIR=../..

## Installing
### Getting the github project onto your system
1. Clone this repo onto your computer
2. Open a shell that has git commands, and navigate to the repo
3. Perform the command “git submodule init” then command “git submodule update” to populate the subdirectories
4. Perform “git pull origin master” in each of the subdirectories
5. Create a new folder somewhere outside of the git repo and name it “combobuild”

## Running Locally
### Building the osvr-installer submodule
1. Launch the CMake GUI as an administrator
2. Set the source code directory as the folder for your osvr-installer submodule 
3. Create a new directory inside of “combobuild” and call it “osvr-installer” 
4. Set the “osvr-installer” folder as the location of where to build the binaries. 
5. Press configure. In the pop-up, set the generator to whichever version of Visual Studio you have. 
6. Then click Generate. Then click Open Project
7. In visual studio, in the solution explorer, click “Solution ‘OSVRInstaller’ (12 of 12 projects)” so that it is highlighted
8. Set the solution configuration to “ReWithDebInfo” and platform to x64
9. In the build menu, select Build Solution or use the shortcut Ctrl+Shift+B
10. This process should take less than 45 minutes.
11. If there are no failure messages in the terminal, you have succeeded. 
NOTE: For development, always build your changes by overwriting this osvr-installer folder, as it will shorten the build time substantially.

### Building the umoria submodule
1. Open cmake as admin and set source code location to the folder for your umoria submodule. 
2. Create a new folder inside “combobuild” and call it “UBuild” (do not rename it)
3. Choose this “Ubuild” folder as the location for building binaries. 
4. Click config, then set the generator to your version of Visual Studio.
5. Some variables will have to be changed among those red rows. Change them like so:
  * CURSES_CURSES_LIBRARY=(path to your pdcurses.lib file)
  * CURSES_FORM_LIBRARY=(path to pdcurses.lib file)
  * CURSES_INCLUDE_PATH=(path to PDCurses root directory)
  * CURSES_NCURSES_LIBRARY=(path to pdcurses.lib file)
6. Click configure again to update the values, then generate, then open project
7. In visual studio and inside the solution explorer click “Solution 'umoria' (3 out of 3 projects)” so that it is highlighted. 
8. Set the solution configuration to “Release” and platform to x64
9. In the build menu, select Build Solution or use the shortcut Ctrl+Shift+B
This process should take no longer than 10 minutes. 

Follow the instructions in the Testing section to run both programs. 

## Warranty
These instructions have been verified to work on Windows 10 as of 8 Nov 2020. 

# Testing
1. Build OSVR Installer
2. Build UMoria
3.Open Shell
4. Either play Umoria or manually move the test map into {parentBuildDirectory}/UBuild/umoria
5. Navigate to {parentBuildDirectory}/{OSVRBuildDirector}/INSTALL/bin
6. Run ./nondirectmode_window_lookabout.bat
7.Open second shell window in the same directory
8. Run ./mapDraw
9. Check to see if rendered map matches the test map
10. Check the output log for errors 

# Deployment
1. Code is deployed at https://github.com/VR-Moria/Umoria-OSVR-Combined
2. See prerequisite software and building instructions

# Technologies Used
1. Multithreading Library
2. OSVR Executables and OpenGL Library for rendering VR Exp
3. C++
4. For further information, view ADRs.txt in main directory of github repository

# Contributing
1. If you wish to contribute to this project, contact Russell Taylor to be added as a member of the organization. If you wish to work on your own simply fork either the original repository or the relia-solve repository and make changes from there.

2. Preferred coding style for contributors 
* Label each method with comments
  * Use descriptive variable names
  * Comments for anything else that could be unclear
  * Code should be easily readable
  * Clear spacing/indentation


# Authors
* VR-Moria
  * Roshni Pasupula
  * Bryce Koester
  * Emily Troutman

# License
Copyright (c) 2020 Russell Taylor, Bryce Koester, Emily Troutman, Roshni Pasupula.

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

# Acknowledgements
We would like to thank Russell Taylor for his support in this project, both for his contributions to OSVR and for his help and advice during development of this project. We would also like to thank Michelle Farmer for her mentorship and support throughout this process, as well as Professor Jeffery Terrell for his teachings in project management. 

# Project Website
https://tarheels.live/comp523vrmoria
