# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion\CLion 2019.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion\CLion 2019.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\C++\CCCHKJ4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\C++\CCCHKJ4\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CCCHKJ4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CCCHKJ4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CCCHKJ4.dir/flags.make

CMakeFiles/CCCHKJ4.dir/main.cpp.obj: CMakeFiles/CCCHKJ4.dir/flags.make
CMakeFiles/CCCHKJ4.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C++\CCCHKJ4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CCCHKJ4.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CCCHKJ4.dir\main.cpp.obj -c D:\C++\CCCHKJ4\main.cpp

CMakeFiles/CCCHKJ4.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CCCHKJ4.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\C++\CCCHKJ4\main.cpp > CMakeFiles\CCCHKJ4.dir\main.cpp.i

CMakeFiles/CCCHKJ4.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CCCHKJ4.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\C++\CCCHKJ4\main.cpp -o CMakeFiles\CCCHKJ4.dir\main.cpp.s

# Object files for target CCCHKJ4
CCCHKJ4_OBJECTS = \
"CMakeFiles/CCCHKJ4.dir/main.cpp.obj"

# External object files for target CCCHKJ4
CCCHKJ4_EXTERNAL_OBJECTS =

CCCHKJ4.exe: CMakeFiles/CCCHKJ4.dir/main.cpp.obj
CCCHKJ4.exe: CMakeFiles/CCCHKJ4.dir/build.make
CCCHKJ4.exe: CMakeFiles/CCCHKJ4.dir/linklibs.rsp
CCCHKJ4.exe: CMakeFiles/CCCHKJ4.dir/objects1.rsp
CCCHKJ4.exe: CMakeFiles/CCCHKJ4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\C++\CCCHKJ4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CCCHKJ4.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CCCHKJ4.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CCCHKJ4.dir/build: CCCHKJ4.exe

.PHONY : CMakeFiles/CCCHKJ4.dir/build

CMakeFiles/CCCHKJ4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CCCHKJ4.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CCCHKJ4.dir/clean

CMakeFiles/CCCHKJ4.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\C++\CCCHKJ4 D:\C++\CCCHKJ4 D:\C++\CCCHKJ4\cmake-build-debug D:\C++\CCCHKJ4\cmake-build-debug D:\C++\CCCHKJ4\cmake-build-debug\CMakeFiles\CCCHKJ4.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CCCHKJ4.dir/depend

