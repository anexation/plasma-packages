# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.1

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
CMAKE_SOURCE_DIR = /home/anex/git/plasma-packages/prison-frameworks/src/prison

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anex/git/plasma-packages/prison-frameworks/src/build

# Include any dependencies generated for this target.
include testapp/CMakeFiles/test-prison.dir/depend.make

# Include the progress variables for this target.
include testapp/CMakeFiles/test-prison.dir/progress.make

# Include the compile flags for this target's objects.
include testapp/CMakeFiles/test-prison.dir/flags.make

testapp/CMakeFiles/test-prison.dir/prison.cpp.o: testapp/CMakeFiles/test-prison.dir/flags.make
testapp/CMakeFiles/test-prison.dir/prison.cpp.o: /home/anex/git/plasma-packages/prison-frameworks/src/prison/testapp/prison.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anex/git/plasma-packages/prison-frameworks/src/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object testapp/CMakeFiles/test-prison.dir/prison.cpp.o"
	cd /home/anex/git/plasma-packages/prison-frameworks/src/build/testapp && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/test-prison.dir/prison.cpp.o -c /home/anex/git/plasma-packages/prison-frameworks/src/prison/testapp/prison.cpp

testapp/CMakeFiles/test-prison.dir/prison.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test-prison.dir/prison.cpp.i"
	cd /home/anex/git/plasma-packages/prison-frameworks/src/build/testapp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/anex/git/plasma-packages/prison-frameworks/src/prison/testapp/prison.cpp > CMakeFiles/test-prison.dir/prison.cpp.i

testapp/CMakeFiles/test-prison.dir/prison.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test-prison.dir/prison.cpp.s"
	cd /home/anex/git/plasma-packages/prison-frameworks/src/build/testapp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/anex/git/plasma-packages/prison-frameworks/src/prison/testapp/prison.cpp -o CMakeFiles/test-prison.dir/prison.cpp.s

testapp/CMakeFiles/test-prison.dir/prison.cpp.o.requires:
.PHONY : testapp/CMakeFiles/test-prison.dir/prison.cpp.o.requires

testapp/CMakeFiles/test-prison.dir/prison.cpp.o.provides: testapp/CMakeFiles/test-prison.dir/prison.cpp.o.requires
	$(MAKE) -f testapp/CMakeFiles/test-prison.dir/build.make testapp/CMakeFiles/test-prison.dir/prison.cpp.o.provides.build
.PHONY : testapp/CMakeFiles/test-prison.dir/prison.cpp.o.provides

testapp/CMakeFiles/test-prison.dir/prison.cpp.o.provides.build: testapp/CMakeFiles/test-prison.dir/prison.cpp.o

testapp/CMakeFiles/test-prison.dir/barcodeexamplewidget.cpp.o: testapp/CMakeFiles/test-prison.dir/flags.make
testapp/CMakeFiles/test-prison.dir/barcodeexamplewidget.cpp.o: /home/anex/git/plasma-packages/prison-frameworks/src/prison/testapp/barcodeexamplewidget.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anex/git/plasma-packages/prison-frameworks/src/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object testapp/CMakeFiles/test-prison.dir/barcodeexamplewidget.cpp.o"
	cd /home/anex/git/plasma-packages/prison-frameworks/src/build/testapp && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/test-prison.dir/barcodeexamplewidget.cpp.o -c /home/anex/git/plasma-packages/prison-frameworks/src/prison/testapp/barcodeexamplewidget.cpp

testapp/CMakeFiles/test-prison.dir/barcodeexamplewidget.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test-prison.dir/barcodeexamplewidget.cpp.i"
	cd /home/anex/git/plasma-packages/prison-frameworks/src/build/testapp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/anex/git/plasma-packages/prison-frameworks/src/prison/testapp/barcodeexamplewidget.cpp > CMakeFiles/test-prison.dir/barcodeexamplewidget.cpp.i

testapp/CMakeFiles/test-prison.dir/barcodeexamplewidget.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test-prison.dir/barcodeexamplewidget.cpp.s"
	cd /home/anex/git/plasma-packages/prison-frameworks/src/build/testapp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/anex/git/plasma-packages/prison-frameworks/src/prison/testapp/barcodeexamplewidget.cpp -o CMakeFiles/test-prison.dir/barcodeexamplewidget.cpp.s

testapp/CMakeFiles/test-prison.dir/barcodeexamplewidget.cpp.o.requires:
.PHONY : testapp/CMakeFiles/test-prison.dir/barcodeexamplewidget.cpp.o.requires

testapp/CMakeFiles/test-prison.dir/barcodeexamplewidget.cpp.o.provides: testapp/CMakeFiles/test-prison.dir/barcodeexamplewidget.cpp.o.requires
	$(MAKE) -f testapp/CMakeFiles/test-prison.dir/build.make testapp/CMakeFiles/test-prison.dir/barcodeexamplewidget.cpp.o.provides.build
.PHONY : testapp/CMakeFiles/test-prison.dir/barcodeexamplewidget.cpp.o.provides

testapp/CMakeFiles/test-prison.dir/barcodeexamplewidget.cpp.o.provides.build: testapp/CMakeFiles/test-prison.dir/barcodeexamplewidget.cpp.o

testapp/CMakeFiles/test-prison.dir/main.cpp.o: testapp/CMakeFiles/test-prison.dir/flags.make
testapp/CMakeFiles/test-prison.dir/main.cpp.o: /home/anex/git/plasma-packages/prison-frameworks/src/prison/testapp/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anex/git/plasma-packages/prison-frameworks/src/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object testapp/CMakeFiles/test-prison.dir/main.cpp.o"
	cd /home/anex/git/plasma-packages/prison-frameworks/src/build/testapp && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/test-prison.dir/main.cpp.o -c /home/anex/git/plasma-packages/prison-frameworks/src/prison/testapp/main.cpp

testapp/CMakeFiles/test-prison.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test-prison.dir/main.cpp.i"
	cd /home/anex/git/plasma-packages/prison-frameworks/src/build/testapp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/anex/git/plasma-packages/prison-frameworks/src/prison/testapp/main.cpp > CMakeFiles/test-prison.dir/main.cpp.i

testapp/CMakeFiles/test-prison.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test-prison.dir/main.cpp.s"
	cd /home/anex/git/plasma-packages/prison-frameworks/src/build/testapp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/anex/git/plasma-packages/prison-frameworks/src/prison/testapp/main.cpp -o CMakeFiles/test-prison.dir/main.cpp.s

testapp/CMakeFiles/test-prison.dir/main.cpp.o.requires:
.PHONY : testapp/CMakeFiles/test-prison.dir/main.cpp.o.requires

testapp/CMakeFiles/test-prison.dir/main.cpp.o.provides: testapp/CMakeFiles/test-prison.dir/main.cpp.o.requires
	$(MAKE) -f testapp/CMakeFiles/test-prison.dir/build.make testapp/CMakeFiles/test-prison.dir/main.cpp.o.provides.build
.PHONY : testapp/CMakeFiles/test-prison.dir/main.cpp.o.provides

testapp/CMakeFiles/test-prison.dir/main.cpp.o.provides.build: testapp/CMakeFiles/test-prison.dir/main.cpp.o

testapp/CMakeFiles/test-prison.dir/test-prison_automoc.cpp.o: testapp/CMakeFiles/test-prison.dir/flags.make
testapp/CMakeFiles/test-prison.dir/test-prison_automoc.cpp.o: testapp/test-prison_automoc.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anex/git/plasma-packages/prison-frameworks/src/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object testapp/CMakeFiles/test-prison.dir/test-prison_automoc.cpp.o"
	cd /home/anex/git/plasma-packages/prison-frameworks/src/build/testapp && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/test-prison.dir/test-prison_automoc.cpp.o -c /home/anex/git/plasma-packages/prison-frameworks/src/build/testapp/test-prison_automoc.cpp

testapp/CMakeFiles/test-prison.dir/test-prison_automoc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test-prison.dir/test-prison_automoc.cpp.i"
	cd /home/anex/git/plasma-packages/prison-frameworks/src/build/testapp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/anex/git/plasma-packages/prison-frameworks/src/build/testapp/test-prison_automoc.cpp > CMakeFiles/test-prison.dir/test-prison_automoc.cpp.i

testapp/CMakeFiles/test-prison.dir/test-prison_automoc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test-prison.dir/test-prison_automoc.cpp.s"
	cd /home/anex/git/plasma-packages/prison-frameworks/src/build/testapp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/anex/git/plasma-packages/prison-frameworks/src/build/testapp/test-prison_automoc.cpp -o CMakeFiles/test-prison.dir/test-prison_automoc.cpp.s

testapp/CMakeFiles/test-prison.dir/test-prison_automoc.cpp.o.requires:
.PHONY : testapp/CMakeFiles/test-prison.dir/test-prison_automoc.cpp.o.requires

testapp/CMakeFiles/test-prison.dir/test-prison_automoc.cpp.o.provides: testapp/CMakeFiles/test-prison.dir/test-prison_automoc.cpp.o.requires
	$(MAKE) -f testapp/CMakeFiles/test-prison.dir/build.make testapp/CMakeFiles/test-prison.dir/test-prison_automoc.cpp.o.provides.build
.PHONY : testapp/CMakeFiles/test-prison.dir/test-prison_automoc.cpp.o.provides

testapp/CMakeFiles/test-prison.dir/test-prison_automoc.cpp.o.provides.build: testapp/CMakeFiles/test-prison.dir/test-prison_automoc.cpp.o

# Object files for target test-prison
test__prison_OBJECTS = \
"CMakeFiles/test-prison.dir/prison.cpp.o" \
"CMakeFiles/test-prison.dir/barcodeexamplewidget.cpp.o" \
"CMakeFiles/test-prison.dir/main.cpp.o" \
"CMakeFiles/test-prison.dir/test-prison_automoc.cpp.o"

# External object files for target test-prison
test__prison_EXTERNAL_OBJECTS =

testapp/test-prison: testapp/CMakeFiles/test-prison.dir/prison.cpp.o
testapp/test-prison: testapp/CMakeFiles/test-prison.dir/barcodeexamplewidget.cpp.o
testapp/test-prison: testapp/CMakeFiles/test-prison.dir/main.cpp.o
testapp/test-prison: testapp/CMakeFiles/test-prison.dir/test-prison_automoc.cpp.o
testapp/test-prison: testapp/CMakeFiles/test-prison.dir/build.make
testapp/test-prison: testapp/CMakeFiles/test-prison.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable test-prison"
	cd /home/anex/git/plasma-packages/prison-frameworks/src/build/testapp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test-prison.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
testapp/CMakeFiles/test-prison.dir/build: testapp/test-prison
.PHONY : testapp/CMakeFiles/test-prison.dir/build

testapp/CMakeFiles/test-prison.dir/requires: testapp/CMakeFiles/test-prison.dir/prison.cpp.o.requires
testapp/CMakeFiles/test-prison.dir/requires: testapp/CMakeFiles/test-prison.dir/barcodeexamplewidget.cpp.o.requires
testapp/CMakeFiles/test-prison.dir/requires: testapp/CMakeFiles/test-prison.dir/main.cpp.o.requires
testapp/CMakeFiles/test-prison.dir/requires: testapp/CMakeFiles/test-prison.dir/test-prison_automoc.cpp.o.requires
.PHONY : testapp/CMakeFiles/test-prison.dir/requires

testapp/CMakeFiles/test-prison.dir/clean:
	cd /home/anex/git/plasma-packages/prison-frameworks/src/build/testapp && $(CMAKE_COMMAND) -P CMakeFiles/test-prison.dir/cmake_clean.cmake
.PHONY : testapp/CMakeFiles/test-prison.dir/clean

testapp/CMakeFiles/test-prison.dir/depend:
	cd /home/anex/git/plasma-packages/prison-frameworks/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anex/git/plasma-packages/prison-frameworks/src/prison /home/anex/git/plasma-packages/prison-frameworks/src/prison/testapp /home/anex/git/plasma-packages/prison-frameworks/src/build /home/anex/git/plasma-packages/prison-frameworks/src/build/testapp /home/anex/git/plasma-packages/prison-frameworks/src/build/testapp/CMakeFiles/test-prison.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : testapp/CMakeFiles/test-prison.dir/depend

