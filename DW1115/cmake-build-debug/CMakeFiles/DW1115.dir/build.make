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
CMAKE_SOURCE_DIR = D:\C++\DW1115

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\C++\DW1115\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DW1115.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DW1115.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DW1115.dir/flags.make

CMakeFiles/DW1115.dir/main.cpp.obj: CMakeFiles/DW1115.dir/flags.make
CMakeFiles/DW1115.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C++\DW1115\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DW1115.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\DW1115.dir\main.cpp.obj -c D:\C++\DW1115\main.cpp

CMakeFiles/DW1115.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DW1115.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\C++\DW1115\main.cpp > CMakeFiles\DW1115.dir\main.cpp.i

CMakeFiles/DW1115.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DW1115.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\C++\DW1115\main.cpp -o CMakeFiles\DW1115.dir\main.cpp.s

# Object files for target DW1115
DW1115_OBJECTS = \
"CMakeFiles/DW1115.dir/main.cpp.obj"

# External object files for target DW1115
DW1115_EXTERNAL_OBJECTS =

DW1115.exe: CMakeFiles/DW1115.dir/main.cpp.obj
DW1115.exe: CMakeFiles/DW1115.dir/build.make
DW1115.exe: CMakeFiles/DW1115.dir/linklibs.rsp
DW1115.exe: CMakeFiles/DW1115.dir/objects1.rsp
DW1115.exe: CMakeFiles/DW1115.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\C++\DW1115\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DW1115.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\DW1115.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DW1115.dir/build: DW1115.exe

.PHONY : CMakeFiles/DW1115.dir/build

CMakeFiles/DW1115.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\DW1115.dir\cmake_clean.cmake
.PHONY : CMakeFiles/DW1115.dir/clean

CMakeFiles/DW1115.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\C++\DW1115 D:\C++\DW1115 D:\C++\DW1115\cmake-build-debug D:\C++\DW1115\cmake-build-debug D:\C++\DW1115\cmake-build-debug\CMakeFiles\DW1115.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DW1115.dir/depend
