# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/valeria/.gazebo/models/qb

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/valeria/.gazebo/models/qb/build

# Include any dependencies generated for this target.
include CMakeFiles/example.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/example.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/example.dir/flags.make

CMakeFiles/example.dir/example.cc.o: CMakeFiles/example.dir/flags.make
CMakeFiles/example.dir/example.cc.o: ../example.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/valeria/.gazebo/models/qb/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/example.dir/example.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/example.dir/example.cc.o -c /home/valeria/.gazebo/models/qb/example.cc

CMakeFiles/example.dir/example.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example.dir/example.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/valeria/.gazebo/models/qb/example.cc > CMakeFiles/example.dir/example.cc.i

CMakeFiles/example.dir/example.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example.dir/example.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/valeria/.gazebo/models/qb/example.cc -o CMakeFiles/example.dir/example.cc.s

CMakeFiles/example.dir/example.cc.o.requires:
.PHONY : CMakeFiles/example.dir/example.cc.o.requires

CMakeFiles/example.dir/example.cc.o.provides: CMakeFiles/example.dir/example.cc.o.requires
	$(MAKE) -f CMakeFiles/example.dir/build.make CMakeFiles/example.dir/example.cc.o.provides.build
.PHONY : CMakeFiles/example.dir/example.cc.o.provides

CMakeFiles/example.dir/example.cc.o.provides.build: CMakeFiles/example.dir/example.cc.o

# Object files for target example
example_OBJECTS = \
"CMakeFiles/example.dir/example.cc.o"

# External object files for target example
example_EXTERNAL_OBJECTS =

example: CMakeFiles/example.dir/example.cc.o
example: CMakeFiles/example.dir/build.make
example: msgs/libposition_stiffness_creator_msgs.so
example: /usr/lib/i386-linux-gnu/libboost_system.so
example: msgs/libpos_current_echo_creator_msgs.so
example: /usr/lib/i386-linux-gnu/libboost_system.so
example: /usr/lib/i386-linux-gnu/libboost_system.so
example: /usr/lib/i386-linux-gnu/libboost_system.so
example: /usr/lib/i386-linux-gnu/libprotobuf.so
example: CMakeFiles/example.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable example"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/example.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/example.dir/build: example
.PHONY : CMakeFiles/example.dir/build

CMakeFiles/example.dir/requires: CMakeFiles/example.dir/example.cc.o.requires
.PHONY : CMakeFiles/example.dir/requires

CMakeFiles/example.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/example.dir/cmake_clean.cmake
.PHONY : CMakeFiles/example.dir/clean

CMakeFiles/example.dir/depend:
	cd /home/valeria/.gazebo/models/qb/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/valeria/.gazebo/models/qb /home/valeria/.gazebo/models/qb /home/valeria/.gazebo/models/qb/build /home/valeria/.gazebo/models/qb/build /home/valeria/.gazebo/models/qb/build/CMakeFiles/example.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/example.dir/depend

