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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/thomas/humax/rg/tmas/book/hfdpcpp/docs/_static/Silver/Singleton/Chocolate

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/thomas/humax/rg/tmas/book/hfdpcpp/docs/_static/Silver/Singleton/build

# Include any dependencies generated for this target.
include driver/CMakeFiles/testchocolate.dir/depend.make

# Include the progress variables for this target.
include driver/CMakeFiles/testchocolate.dir/progress.make

# Include the compile flags for this target's objects.
include driver/CMakeFiles/testchocolate.dir/flags.make

driver/CMakeFiles/testchocolate.dir/chocolate.cpp.o: driver/CMakeFiles/testchocolate.dir/flags.make
driver/CMakeFiles/testchocolate.dir/chocolate.cpp.o: /home/thomas/humax/rg/tmas/book/hfdpcpp/docs/_static/Silver/Singleton/Chocolate/driver/chocolate.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/thomas/humax/rg/tmas/book/hfdpcpp/docs/_static/Silver/Singleton/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object driver/CMakeFiles/testchocolate.dir/chocolate.cpp.o"
	cd /home/thomas/humax/rg/tmas/book/hfdpcpp/docs/_static/Silver/Singleton/build/driver && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/testchocolate.dir/chocolate.cpp.o -c /home/thomas/humax/rg/tmas/book/hfdpcpp/docs/_static/Silver/Singleton/Chocolate/driver/chocolate.cpp

driver/CMakeFiles/testchocolate.dir/chocolate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testchocolate.dir/chocolate.cpp.i"
	cd /home/thomas/humax/rg/tmas/book/hfdpcpp/docs/_static/Silver/Singleton/build/driver && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/thomas/humax/rg/tmas/book/hfdpcpp/docs/_static/Silver/Singleton/Chocolate/driver/chocolate.cpp > CMakeFiles/testchocolate.dir/chocolate.cpp.i

driver/CMakeFiles/testchocolate.dir/chocolate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testchocolate.dir/chocolate.cpp.s"
	cd /home/thomas/humax/rg/tmas/book/hfdpcpp/docs/_static/Silver/Singleton/build/driver && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/thomas/humax/rg/tmas/book/hfdpcpp/docs/_static/Silver/Singleton/Chocolate/driver/chocolate.cpp -o CMakeFiles/testchocolate.dir/chocolate.cpp.s

driver/CMakeFiles/testchocolate.dir/chocolate.cpp.o.requires:
.PHONY : driver/CMakeFiles/testchocolate.dir/chocolate.cpp.o.requires

driver/CMakeFiles/testchocolate.dir/chocolate.cpp.o.provides: driver/CMakeFiles/testchocolate.dir/chocolate.cpp.o.requires
	$(MAKE) -f driver/CMakeFiles/testchocolate.dir/build.make driver/CMakeFiles/testchocolate.dir/chocolate.cpp.o.provides.build
.PHONY : driver/CMakeFiles/testchocolate.dir/chocolate.cpp.o.provides

driver/CMakeFiles/testchocolate.dir/chocolate.cpp.o.provides.build: driver/CMakeFiles/testchocolate.dir/chocolate.cpp.o

# Object files for target testchocolate
testchocolate_OBJECTS = \
"CMakeFiles/testchocolate.dir/chocolate.cpp.o"

# External object files for target testchocolate
testchocolate_EXTERNAL_OBJECTS =

driver/testchocolate: driver/CMakeFiles/testchocolate.dir/chocolate.cpp.o
driver/testchocolate: lib/libchocolate.a
driver/testchocolate: driver/CMakeFiles/testchocolate.dir/build.make
driver/testchocolate: driver/CMakeFiles/testchocolate.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable testchocolate"
	cd /home/thomas/humax/rg/tmas/book/hfdpcpp/docs/_static/Silver/Singleton/build/driver && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testchocolate.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
driver/CMakeFiles/testchocolate.dir/build: driver/testchocolate
.PHONY : driver/CMakeFiles/testchocolate.dir/build

driver/CMakeFiles/testchocolate.dir/requires: driver/CMakeFiles/testchocolate.dir/chocolate.cpp.o.requires
.PHONY : driver/CMakeFiles/testchocolate.dir/requires

driver/CMakeFiles/testchocolate.dir/clean:
	cd /home/thomas/humax/rg/tmas/book/hfdpcpp/docs/_static/Silver/Singleton/build/driver && $(CMAKE_COMMAND) -P CMakeFiles/testchocolate.dir/cmake_clean.cmake
.PHONY : driver/CMakeFiles/testchocolate.dir/clean

driver/CMakeFiles/testchocolate.dir/depend:
	cd /home/thomas/humax/rg/tmas/book/hfdpcpp/docs/_static/Silver/Singleton/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/thomas/humax/rg/tmas/book/hfdpcpp/docs/_static/Silver/Singleton/Chocolate /home/thomas/humax/rg/tmas/book/hfdpcpp/docs/_static/Silver/Singleton/Chocolate/driver /home/thomas/humax/rg/tmas/book/hfdpcpp/docs/_static/Silver/Singleton/build /home/thomas/humax/rg/tmas/book/hfdpcpp/docs/_static/Silver/Singleton/build/driver /home/thomas/humax/rg/tmas/book/hfdpcpp/docs/_static/Silver/Singleton/build/driver/CMakeFiles/testchocolate.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : driver/CMakeFiles/testchocolate.dir/depend

