# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/oksana/Desktop/programming/cpp/dz/isogram-0kssana

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/oksana/Desktop/programming/cpp/dz/isogram-0kssana/build

# Include any dependencies generated for this target.
include isogram/CMakeFiles/isogram_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include isogram/CMakeFiles/isogram_test.dir/compiler_depend.make

# Include the progress variables for this target.
include isogram/CMakeFiles/isogram_test.dir/progress.make

# Include the compile flags for this target's objects.
include isogram/CMakeFiles/isogram_test.dir/flags.make

isogram/CMakeFiles/isogram_test.dir/isogram.cpp.o: isogram/CMakeFiles/isogram_test.dir/flags.make
isogram/CMakeFiles/isogram_test.dir/isogram.cpp.o: /home/oksana/Desktop/programming/cpp/dz/isogram-0kssana/isogram/isogram.cpp
isogram/CMakeFiles/isogram_test.dir/isogram.cpp.o: isogram/CMakeFiles/isogram_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/oksana/Desktop/programming/cpp/dz/isogram-0kssana/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object isogram/CMakeFiles/isogram_test.dir/isogram.cpp.o"
	cd /home/oksana/Desktop/programming/cpp/dz/isogram-0kssana/build/isogram && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT isogram/CMakeFiles/isogram_test.dir/isogram.cpp.o -MF CMakeFiles/isogram_test.dir/isogram.cpp.o.d -o CMakeFiles/isogram_test.dir/isogram.cpp.o -c /home/oksana/Desktop/programming/cpp/dz/isogram-0kssana/isogram/isogram.cpp

isogram/CMakeFiles/isogram_test.dir/isogram.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/isogram_test.dir/isogram.cpp.i"
	cd /home/oksana/Desktop/programming/cpp/dz/isogram-0kssana/build/isogram && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/oksana/Desktop/programming/cpp/dz/isogram-0kssana/isogram/isogram.cpp > CMakeFiles/isogram_test.dir/isogram.cpp.i

isogram/CMakeFiles/isogram_test.dir/isogram.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/isogram_test.dir/isogram.cpp.s"
	cd /home/oksana/Desktop/programming/cpp/dz/isogram-0kssana/build/isogram && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/oksana/Desktop/programming/cpp/dz/isogram-0kssana/isogram/isogram.cpp -o CMakeFiles/isogram_test.dir/isogram.cpp.s

isogram/CMakeFiles/isogram_test.dir/isogram_test.cpp.o: isogram/CMakeFiles/isogram_test.dir/flags.make
isogram/CMakeFiles/isogram_test.dir/isogram_test.cpp.o: /home/oksana/Desktop/programming/cpp/dz/isogram-0kssana/isogram/isogram_test.cpp
isogram/CMakeFiles/isogram_test.dir/isogram_test.cpp.o: isogram/CMakeFiles/isogram_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/oksana/Desktop/programming/cpp/dz/isogram-0kssana/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object isogram/CMakeFiles/isogram_test.dir/isogram_test.cpp.o"
	cd /home/oksana/Desktop/programming/cpp/dz/isogram-0kssana/build/isogram && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT isogram/CMakeFiles/isogram_test.dir/isogram_test.cpp.o -MF CMakeFiles/isogram_test.dir/isogram_test.cpp.o.d -o CMakeFiles/isogram_test.dir/isogram_test.cpp.o -c /home/oksana/Desktop/programming/cpp/dz/isogram-0kssana/isogram/isogram_test.cpp

isogram/CMakeFiles/isogram_test.dir/isogram_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/isogram_test.dir/isogram_test.cpp.i"
	cd /home/oksana/Desktop/programming/cpp/dz/isogram-0kssana/build/isogram && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/oksana/Desktop/programming/cpp/dz/isogram-0kssana/isogram/isogram_test.cpp > CMakeFiles/isogram_test.dir/isogram_test.cpp.i

isogram/CMakeFiles/isogram_test.dir/isogram_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/isogram_test.dir/isogram_test.cpp.s"
	cd /home/oksana/Desktop/programming/cpp/dz/isogram-0kssana/build/isogram && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/oksana/Desktop/programming/cpp/dz/isogram-0kssana/isogram/isogram_test.cpp -o CMakeFiles/isogram_test.dir/isogram_test.cpp.s

# Object files for target isogram_test
isogram_test_OBJECTS = \
"CMakeFiles/isogram_test.dir/isogram.cpp.o" \
"CMakeFiles/isogram_test.dir/isogram_test.cpp.o"

# External object files for target isogram_test
isogram_test_EXTERNAL_OBJECTS =

isogram/isogram_test: isogram/CMakeFiles/isogram_test.dir/isogram.cpp.o
isogram/isogram_test: isogram/CMakeFiles/isogram_test.dir/isogram_test.cpp.o
isogram/isogram_test: isogram/CMakeFiles/isogram_test.dir/build.make
isogram/isogram_test: external/doctest/libdoctest.a
isogram/isogram_test: isogram/CMakeFiles/isogram_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/oksana/Desktop/programming/cpp/dz/isogram-0kssana/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable isogram_test"
	cd /home/oksana/Desktop/programming/cpp/dz/isogram-0kssana/build/isogram && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/isogram_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
isogram/CMakeFiles/isogram_test.dir/build: isogram/isogram_test
.PHONY : isogram/CMakeFiles/isogram_test.dir/build

isogram/CMakeFiles/isogram_test.dir/clean:
	cd /home/oksana/Desktop/programming/cpp/dz/isogram-0kssana/build/isogram && $(CMAKE_COMMAND) -P CMakeFiles/isogram_test.dir/cmake_clean.cmake
.PHONY : isogram/CMakeFiles/isogram_test.dir/clean

isogram/CMakeFiles/isogram_test.dir/depend:
	cd /home/oksana/Desktop/programming/cpp/dz/isogram-0kssana/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/oksana/Desktop/programming/cpp/dz/isogram-0kssana /home/oksana/Desktop/programming/cpp/dz/isogram-0kssana/isogram /home/oksana/Desktop/programming/cpp/dz/isogram-0kssana/build /home/oksana/Desktop/programming/cpp/dz/isogram-0kssana/build/isogram /home/oksana/Desktop/programming/cpp/dz/isogram-0kssana/build/isogram/CMakeFiles/isogram_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : isogram/CMakeFiles/isogram_test.dir/depend

