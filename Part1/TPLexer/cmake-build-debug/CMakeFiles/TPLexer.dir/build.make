# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/Part1/TPLexer"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/Part1/TPLexer/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/TPLexer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TPLexer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TPLexer.dir/flags.make

../flexer.cpp: ../flexer.l
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir="/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/Part1/TPLexer/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "[FLEX][Flexer] Building scanner with flex 2.6.4"
	cd "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/Part1/TPLexer" && /usr/bin/flex "-o/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/Part1/TPLexer/cmake-build-debug/../flexer.cpp" flexer.l

CMakeFiles/TPLexer.dir/main.cpp.o: CMakeFiles/TPLexer.dir/flags.make
CMakeFiles/TPLexer.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/Part1/TPLexer/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/TPLexer.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TPLexer.dir/main.cpp.o -c "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/Part1/TPLexer/main.cpp"

CMakeFiles/TPLexer.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TPLexer.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/Part1/TPLexer/main.cpp" > CMakeFiles/TPLexer.dir/main.cpp.i

CMakeFiles/TPLexer.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TPLexer.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/Part1/TPLexer/main.cpp" -o CMakeFiles/TPLexer.dir/main.cpp.s

CMakeFiles/TPLexer.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/TPLexer.dir/main.cpp.o.requires

CMakeFiles/TPLexer.dir/main.cpp.o.provides: CMakeFiles/TPLexer.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/TPLexer.dir/build.make CMakeFiles/TPLexer.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/TPLexer.dir/main.cpp.o.provides

CMakeFiles/TPLexer.dir/main.cpp.o.provides.build: CMakeFiles/TPLexer.dir/main.cpp.o


CMakeFiles/TPLexer.dir/language.cpp.o: CMakeFiles/TPLexer.dir/flags.make
CMakeFiles/TPLexer.dir/language.cpp.o: ../language.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/Part1/TPLexer/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/TPLexer.dir/language.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TPLexer.dir/language.cpp.o -c "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/Part1/TPLexer/language.cpp"

CMakeFiles/TPLexer.dir/language.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TPLexer.dir/language.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/Part1/TPLexer/language.cpp" > CMakeFiles/TPLexer.dir/language.cpp.i

CMakeFiles/TPLexer.dir/language.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TPLexer.dir/language.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/Part1/TPLexer/language.cpp" -o CMakeFiles/TPLexer.dir/language.cpp.s

CMakeFiles/TPLexer.dir/language.cpp.o.requires:

.PHONY : CMakeFiles/TPLexer.dir/language.cpp.o.requires

CMakeFiles/TPLexer.dir/language.cpp.o.provides: CMakeFiles/TPLexer.dir/language.cpp.o.requires
	$(MAKE) -f CMakeFiles/TPLexer.dir/build.make CMakeFiles/TPLexer.dir/language.cpp.o.provides.build
.PHONY : CMakeFiles/TPLexer.dir/language.cpp.o.provides

CMakeFiles/TPLexer.dir/language.cpp.o.provides.build: CMakeFiles/TPLexer.dir/language.cpp.o


CMakeFiles/TPLexer.dir/hlexer.cpp.o: CMakeFiles/TPLexer.dir/flags.make
CMakeFiles/TPLexer.dir/hlexer.cpp.o: ../hlexer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/Part1/TPLexer/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/TPLexer.dir/hlexer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TPLexer.dir/hlexer.cpp.o -c "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/Part1/TPLexer/hlexer.cpp"

CMakeFiles/TPLexer.dir/hlexer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TPLexer.dir/hlexer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/Part1/TPLexer/hlexer.cpp" > CMakeFiles/TPLexer.dir/hlexer.cpp.i

CMakeFiles/TPLexer.dir/hlexer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TPLexer.dir/hlexer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/Part1/TPLexer/hlexer.cpp" -o CMakeFiles/TPLexer.dir/hlexer.cpp.s

CMakeFiles/TPLexer.dir/hlexer.cpp.o.requires:

.PHONY : CMakeFiles/TPLexer.dir/hlexer.cpp.o.requires

CMakeFiles/TPLexer.dir/hlexer.cpp.o.provides: CMakeFiles/TPLexer.dir/hlexer.cpp.o.requires
	$(MAKE) -f CMakeFiles/TPLexer.dir/build.make CMakeFiles/TPLexer.dir/hlexer.cpp.o.provides.build
.PHONY : CMakeFiles/TPLexer.dir/hlexer.cpp.o.provides

CMakeFiles/TPLexer.dir/hlexer.cpp.o.provides.build: CMakeFiles/TPLexer.dir/hlexer.cpp.o


CMakeFiles/TPLexer.dir/flexer.cpp.o: CMakeFiles/TPLexer.dir/flags.make
CMakeFiles/TPLexer.dir/flexer.cpp.o: ../flexer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/Part1/TPLexer/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/TPLexer.dir/flexer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TPLexer.dir/flexer.cpp.o -c "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/Part1/TPLexer/flexer.cpp"

CMakeFiles/TPLexer.dir/flexer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TPLexer.dir/flexer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/Part1/TPLexer/flexer.cpp" > CMakeFiles/TPLexer.dir/flexer.cpp.i

CMakeFiles/TPLexer.dir/flexer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TPLexer.dir/flexer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/Part1/TPLexer/flexer.cpp" -o CMakeFiles/TPLexer.dir/flexer.cpp.s

CMakeFiles/TPLexer.dir/flexer.cpp.o.requires:

.PHONY : CMakeFiles/TPLexer.dir/flexer.cpp.o.requires

CMakeFiles/TPLexer.dir/flexer.cpp.o.provides: CMakeFiles/TPLexer.dir/flexer.cpp.o.requires
	$(MAKE) -f CMakeFiles/TPLexer.dir/build.make CMakeFiles/TPLexer.dir/flexer.cpp.o.provides.build
.PHONY : CMakeFiles/TPLexer.dir/flexer.cpp.o.provides

CMakeFiles/TPLexer.dir/flexer.cpp.o.provides.build: CMakeFiles/TPLexer.dir/flexer.cpp.o


# Object files for target TPLexer
TPLexer_OBJECTS = \
"CMakeFiles/TPLexer.dir/main.cpp.o" \
"CMakeFiles/TPLexer.dir/language.cpp.o" \
"CMakeFiles/TPLexer.dir/hlexer.cpp.o" \
"CMakeFiles/TPLexer.dir/flexer.cpp.o"

# External object files for target TPLexer
TPLexer_EXTERNAL_OBJECTS =

TPLexer: CMakeFiles/TPLexer.dir/main.cpp.o
TPLexer: CMakeFiles/TPLexer.dir/language.cpp.o
TPLexer: CMakeFiles/TPLexer.dir/hlexer.cpp.o
TPLexer: CMakeFiles/TPLexer.dir/flexer.cpp.o
TPLexer: CMakeFiles/TPLexer.dir/build.make
TPLexer: CMakeFiles/TPLexer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/Part1/TPLexer/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable TPLexer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TPLexer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TPLexer.dir/build: TPLexer

.PHONY : CMakeFiles/TPLexer.dir/build

CMakeFiles/TPLexer.dir/requires: CMakeFiles/TPLexer.dir/main.cpp.o.requires
CMakeFiles/TPLexer.dir/requires: CMakeFiles/TPLexer.dir/language.cpp.o.requires
CMakeFiles/TPLexer.dir/requires: CMakeFiles/TPLexer.dir/hlexer.cpp.o.requires
CMakeFiles/TPLexer.dir/requires: CMakeFiles/TPLexer.dir/flexer.cpp.o.requires

.PHONY : CMakeFiles/TPLexer.dir/requires

CMakeFiles/TPLexer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TPLexer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TPLexer.dir/clean

CMakeFiles/TPLexer.dir/depend: ../flexer.cpp
	cd "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/Part1/TPLexer/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/Part1/TPLexer" "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/Part1/TPLexer" "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/Part1/TPLexer/cmake-build-debug" "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/Part1/TPLexer/cmake-build-debug" "/mnt/c/Users/Kristmann Ingi/Documents/Uni/Compilers/GitHub/Part1/TPLexer/cmake-build-debug/CMakeFiles/TPLexer.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/TPLexer.dir/depend

