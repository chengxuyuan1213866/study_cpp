# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\Clion\CLion 2023.1.5\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "E:\Clion\CLion 2023.1.5\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Cfile\C++\cpp\Demo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Cfile\C++\cpp\Demo\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Demo.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Demo.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Demo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Demo.dir/flags.make

CMakeFiles/Demo.dir/demo/triangle/Point.cpp.obj: CMakeFiles/Demo.dir/flags.make
CMakeFiles/Demo.dir/demo/triangle/Point.cpp.obj: E:/Cfile/C++/cpp/Demo/demo/triangle/Point.cpp
CMakeFiles/Demo.dir/demo/triangle/Point.cpp.obj: CMakeFiles/Demo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Cfile\C++\cpp\Demo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Demo.dir/demo/triangle/Point.cpp.obj"
	F:\mingw\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Demo.dir/demo/triangle/Point.cpp.obj -MF CMakeFiles\Demo.dir\demo\triangle\Point.cpp.obj.d -o CMakeFiles\Demo.dir\demo\triangle\Point.cpp.obj -c E:\Cfile\C++\cpp\Demo\demo\triangle\Point.cpp

CMakeFiles/Demo.dir/demo/triangle/Point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Demo.dir/demo/triangle/Point.cpp.i"
	F:\mingw\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Cfile\C++\cpp\Demo\demo\triangle\Point.cpp > CMakeFiles\Demo.dir\demo\triangle\Point.cpp.i

CMakeFiles/Demo.dir/demo/triangle/Point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Demo.dir/demo/triangle/Point.cpp.s"
	F:\mingw\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Cfile\C++\cpp\Demo\demo\triangle\Point.cpp -o CMakeFiles\Demo.dir\demo\triangle\Point.cpp.s

CMakeFiles/Demo.dir/demo/triangle/Triangle.cpp.obj: CMakeFiles/Demo.dir/flags.make
CMakeFiles/Demo.dir/demo/triangle/Triangle.cpp.obj: E:/Cfile/C++/cpp/Demo/demo/triangle/Triangle.cpp
CMakeFiles/Demo.dir/demo/triangle/Triangle.cpp.obj: CMakeFiles/Demo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Cfile\C++\cpp\Demo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Demo.dir/demo/triangle/Triangle.cpp.obj"
	F:\mingw\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Demo.dir/demo/triangle/Triangle.cpp.obj -MF CMakeFiles\Demo.dir\demo\triangle\Triangle.cpp.obj.d -o CMakeFiles\Demo.dir\demo\triangle\Triangle.cpp.obj -c E:\Cfile\C++\cpp\Demo\demo\triangle\Triangle.cpp

CMakeFiles/Demo.dir/demo/triangle/Triangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Demo.dir/demo/triangle/Triangle.cpp.i"
	F:\mingw\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Cfile\C++\cpp\Demo\demo\triangle\Triangle.cpp > CMakeFiles\Demo.dir\demo\triangle\Triangle.cpp.i

CMakeFiles/Demo.dir/demo/triangle/Triangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Demo.dir/demo/triangle/Triangle.cpp.s"
	F:\mingw\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Cfile\C++\cpp\Demo\demo\triangle\Triangle.cpp -o CMakeFiles\Demo.dir\demo\triangle\Triangle.cpp.s

CMakeFiles/Demo.dir/demo/triangle/Main.cpp.obj: CMakeFiles/Demo.dir/flags.make
CMakeFiles/Demo.dir/demo/triangle/Main.cpp.obj: E:/Cfile/C++/cpp/Demo/demo/triangle/Main.cpp
CMakeFiles/Demo.dir/demo/triangle/Main.cpp.obj: CMakeFiles/Demo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Cfile\C++\cpp\Demo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Demo.dir/demo/triangle/Main.cpp.obj"
	F:\mingw\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Demo.dir/demo/triangle/Main.cpp.obj -MF CMakeFiles\Demo.dir\demo\triangle\Main.cpp.obj.d -o CMakeFiles\Demo.dir\demo\triangle\Main.cpp.obj -c E:\Cfile\C++\cpp\Demo\demo\triangle\Main.cpp

CMakeFiles/Demo.dir/demo/triangle/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Demo.dir/demo/triangle/Main.cpp.i"
	F:\mingw\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Cfile\C++\cpp\Demo\demo\triangle\Main.cpp > CMakeFiles\Demo.dir\demo\triangle\Main.cpp.i

CMakeFiles/Demo.dir/demo/triangle/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Demo.dir/demo/triangle/Main.cpp.s"
	F:\mingw\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Cfile\C++\cpp\Demo\demo\triangle\Main.cpp -o CMakeFiles\Demo.dir\demo\triangle\Main.cpp.s

# Object files for target Demo
Demo_OBJECTS = \
"CMakeFiles/Demo.dir/demo/triangle/Point.cpp.obj" \
"CMakeFiles/Demo.dir/demo/triangle/Triangle.cpp.obj" \
"CMakeFiles/Demo.dir/demo/triangle/Main.cpp.obj"

# External object files for target Demo
Demo_EXTERNAL_OBJECTS =

Demo.exe: CMakeFiles/Demo.dir/demo/triangle/Point.cpp.obj
Demo.exe: CMakeFiles/Demo.dir/demo/triangle/Triangle.cpp.obj
Demo.exe: CMakeFiles/Demo.dir/demo/triangle/Main.cpp.obj
Demo.exe: CMakeFiles/Demo.dir/build.make
Demo.exe: CMakeFiles/Demo.dir/linkLibs.rsp
Demo.exe: CMakeFiles/Demo.dir/objects1.rsp
Demo.exe: CMakeFiles/Demo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Cfile\C++\cpp\Demo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Demo.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Demo.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Demo.dir/build: Demo.exe
.PHONY : CMakeFiles/Demo.dir/build

CMakeFiles/Demo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Demo.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Demo.dir/clean

CMakeFiles/Demo.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Cfile\C++\cpp\Demo E:\Cfile\C++\cpp\Demo E:\Cfile\C++\cpp\Demo\cmake-build-debug E:\Cfile\C++\cpp\Demo\cmake-build-debug E:\Cfile\C++\cpp\Demo\cmake-build-debug\CMakeFiles\Demo.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Demo.dir/depend

