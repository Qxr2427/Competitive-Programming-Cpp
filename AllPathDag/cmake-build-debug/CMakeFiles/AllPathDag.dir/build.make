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
CMAKE_SOURCE_DIR = D:\C++\AllPathDag

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\C++\AllPathDag\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/AllPathDag.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AllPathDag.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AllPathDag.dir/flags.make

CMakeFiles/AllPathDag.dir/main.cpp.obj: CMakeFiles/AllPathDag.dir/flags.make
CMakeFiles/AllPathDag.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C++\AllPathDag\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AllPathDag.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\AllPathDag.dir\main.cpp.obj -c D:\C++\AllPathDag\main.cpp

CMakeFiles/AllPathDag.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AllPathDag.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\C++\AllPathDag\main.cpp > CMakeFiles\AllPathDag.dir\main.cpp.i

CMakeFiles/AllPathDag.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AllPathDag.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\C++\AllPathDag\main.cpp -o CMakeFiles\AllPathDag.dir\main.cpp.s

# Object files for target AllPathDag
AllPathDag_OBJECTS = \
"CMakeFiles/AllPathDag.dir/main.cpp.obj"

# External object files for target AllPathDag
AllPathDag_EXTERNAL_OBJECTS =

AllPathDag.exe: CMakeFiles/AllPathDag.dir/main.cpp.obj
AllPathDag.exe: CMakeFiles/AllPathDag.dir/build.make
AllPathDag.exe: CMakeFiles/AllPathDag.dir/linklibs.rsp
AllPathDag.exe: CMakeFiles/AllPathDag.dir/objects1.rsp
AllPathDag.exe: CMakeFiles/AllPathDag.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\C++\AllPathDag\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable AllPathDag.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\AllPathDag.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AllPathDag.dir/build: AllPathDag.exe

.PHONY : CMakeFiles/AllPathDag.dir/build

CMakeFiles/AllPathDag.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\AllPathDag.dir\cmake_clean.cmake
.PHONY : CMakeFiles/AllPathDag.dir/clean

CMakeFiles/AllPathDag.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\C++\AllPathDag D:\C++\AllPathDag D:\C++\AllPathDag\cmake-build-debug D:\C++\AllPathDag\cmake-build-debug D:\C++\AllPathDag\cmake-build-debug\CMakeFiles\AllPathDag.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AllPathDag.dir/depend
