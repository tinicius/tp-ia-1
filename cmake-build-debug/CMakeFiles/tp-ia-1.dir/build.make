# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /home/czarhrs/.local/share/JetBrains/Toolbox/apps/clion/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /home/czarhrs/.local/share/JetBrains/Toolbox/apps/clion/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/czarhrs/CLionProjects/tp-ia-2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/czarhrs/CLionProjects/tp-ia-2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/tp-ia-1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/tp-ia-1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tp-ia-1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tp-ia-1.dir/flags.make

CMakeFiles/tp-ia-1.dir/src/main.cpp.o: CMakeFiles/tp-ia-1.dir/flags.make
CMakeFiles/tp-ia-1.dir/src/main.cpp.o: /home/czarhrs/CLionProjects/tp-ia-2/src/main.cpp
CMakeFiles/tp-ia-1.dir/src/main.cpp.o: CMakeFiles/tp-ia-1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/czarhrs/CLionProjects/tp-ia-2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tp-ia-1.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp-ia-1.dir/src/main.cpp.o -MF CMakeFiles/tp-ia-1.dir/src/main.cpp.o.d -o CMakeFiles/tp-ia-1.dir/src/main.cpp.o -c /home/czarhrs/CLionProjects/tp-ia-2/src/main.cpp

CMakeFiles/tp-ia-1.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp-ia-1.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/czarhrs/CLionProjects/tp-ia-2/src/main.cpp > CMakeFiles/tp-ia-1.dir/src/main.cpp.i

CMakeFiles/tp-ia-1.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp-ia-1.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/czarhrs/CLionProjects/tp-ia-2/src/main.cpp -o CMakeFiles/tp-ia-1.dir/src/main.cpp.s

CMakeFiles/tp-ia-1.dir/src/dfs.cpp.o: CMakeFiles/tp-ia-1.dir/flags.make
CMakeFiles/tp-ia-1.dir/src/dfs.cpp.o: /home/czarhrs/CLionProjects/tp-ia-2/src/dfs.cpp
CMakeFiles/tp-ia-1.dir/src/dfs.cpp.o: CMakeFiles/tp-ia-1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/czarhrs/CLionProjects/tp-ia-2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/tp-ia-1.dir/src/dfs.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp-ia-1.dir/src/dfs.cpp.o -MF CMakeFiles/tp-ia-1.dir/src/dfs.cpp.o.d -o CMakeFiles/tp-ia-1.dir/src/dfs.cpp.o -c /home/czarhrs/CLionProjects/tp-ia-2/src/dfs.cpp

CMakeFiles/tp-ia-1.dir/src/dfs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp-ia-1.dir/src/dfs.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/czarhrs/CLionProjects/tp-ia-2/src/dfs.cpp > CMakeFiles/tp-ia-1.dir/src/dfs.cpp.i

CMakeFiles/tp-ia-1.dir/src/dfs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp-ia-1.dir/src/dfs.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/czarhrs/CLionProjects/tp-ia-2/src/dfs.cpp -o CMakeFiles/tp-ia-1.dir/src/dfs.cpp.s

CMakeFiles/tp-ia-1.dir/src/bfs.cpp.o: CMakeFiles/tp-ia-1.dir/flags.make
CMakeFiles/tp-ia-1.dir/src/bfs.cpp.o: /home/czarhrs/CLionProjects/tp-ia-2/src/bfs.cpp
CMakeFiles/tp-ia-1.dir/src/bfs.cpp.o: CMakeFiles/tp-ia-1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/czarhrs/CLionProjects/tp-ia-2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/tp-ia-1.dir/src/bfs.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp-ia-1.dir/src/bfs.cpp.o -MF CMakeFiles/tp-ia-1.dir/src/bfs.cpp.o.d -o CMakeFiles/tp-ia-1.dir/src/bfs.cpp.o -c /home/czarhrs/CLionProjects/tp-ia-2/src/bfs.cpp

CMakeFiles/tp-ia-1.dir/src/bfs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp-ia-1.dir/src/bfs.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/czarhrs/CLionProjects/tp-ia-2/src/bfs.cpp > CMakeFiles/tp-ia-1.dir/src/bfs.cpp.i

CMakeFiles/tp-ia-1.dir/src/bfs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp-ia-1.dir/src/bfs.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/czarhrs/CLionProjects/tp-ia-2/src/bfs.cpp -o CMakeFiles/tp-ia-1.dir/src/bfs.cpp.s

CMakeFiles/tp-ia-1.dir/src/utils.cpp.o: CMakeFiles/tp-ia-1.dir/flags.make
CMakeFiles/tp-ia-1.dir/src/utils.cpp.o: /home/czarhrs/CLionProjects/tp-ia-2/src/utils.cpp
CMakeFiles/tp-ia-1.dir/src/utils.cpp.o: CMakeFiles/tp-ia-1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/czarhrs/CLionProjects/tp-ia-2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/tp-ia-1.dir/src/utils.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp-ia-1.dir/src/utils.cpp.o -MF CMakeFiles/tp-ia-1.dir/src/utils.cpp.o.d -o CMakeFiles/tp-ia-1.dir/src/utils.cpp.o -c /home/czarhrs/CLionProjects/tp-ia-2/src/utils.cpp

CMakeFiles/tp-ia-1.dir/src/utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp-ia-1.dir/src/utils.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/czarhrs/CLionProjects/tp-ia-2/src/utils.cpp > CMakeFiles/tp-ia-1.dir/src/utils.cpp.i

CMakeFiles/tp-ia-1.dir/src/utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp-ia-1.dir/src/utils.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/czarhrs/CLionProjects/tp-ia-2/src/utils.cpp -o CMakeFiles/tp-ia-1.dir/src/utils.cpp.s

CMakeFiles/tp-ia-1.dir/src/astar.cpp.o: CMakeFiles/tp-ia-1.dir/flags.make
CMakeFiles/tp-ia-1.dir/src/astar.cpp.o: /home/czarhrs/CLionProjects/tp-ia-2/src/astar.cpp
CMakeFiles/tp-ia-1.dir/src/astar.cpp.o: CMakeFiles/tp-ia-1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/czarhrs/CLionProjects/tp-ia-2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/tp-ia-1.dir/src/astar.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp-ia-1.dir/src/astar.cpp.o -MF CMakeFiles/tp-ia-1.dir/src/astar.cpp.o.d -o CMakeFiles/tp-ia-1.dir/src/astar.cpp.o -c /home/czarhrs/CLionProjects/tp-ia-2/src/astar.cpp

CMakeFiles/tp-ia-1.dir/src/astar.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp-ia-1.dir/src/astar.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/czarhrs/CLionProjects/tp-ia-2/src/astar.cpp > CMakeFiles/tp-ia-1.dir/src/astar.cpp.i

CMakeFiles/tp-ia-1.dir/src/astar.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp-ia-1.dir/src/astar.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/czarhrs/CLionProjects/tp-ia-2/src/astar.cpp -o CMakeFiles/tp-ia-1.dir/src/astar.cpp.s

# Object files for target tp-ia-1
tp__ia__1_OBJECTS = \
"CMakeFiles/tp-ia-1.dir/src/main.cpp.o" \
"CMakeFiles/tp-ia-1.dir/src/dfs.cpp.o" \
"CMakeFiles/tp-ia-1.dir/src/bfs.cpp.o" \
"CMakeFiles/tp-ia-1.dir/src/utils.cpp.o" \
"CMakeFiles/tp-ia-1.dir/src/astar.cpp.o"

# External object files for target tp-ia-1
tp__ia__1_EXTERNAL_OBJECTS =

tp-ia-1: CMakeFiles/tp-ia-1.dir/src/main.cpp.o
tp-ia-1: CMakeFiles/tp-ia-1.dir/src/dfs.cpp.o
tp-ia-1: CMakeFiles/tp-ia-1.dir/src/bfs.cpp.o
tp-ia-1: CMakeFiles/tp-ia-1.dir/src/utils.cpp.o
tp-ia-1: CMakeFiles/tp-ia-1.dir/src/astar.cpp.o
tp-ia-1: CMakeFiles/tp-ia-1.dir/build.make
tp-ia-1: CMakeFiles/tp-ia-1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/czarhrs/CLionProjects/tp-ia-2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable tp-ia-1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tp-ia-1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tp-ia-1.dir/build: tp-ia-1
.PHONY : CMakeFiles/tp-ia-1.dir/build

CMakeFiles/tp-ia-1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tp-ia-1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tp-ia-1.dir/clean

CMakeFiles/tp-ia-1.dir/depend:
	cd /home/czarhrs/CLionProjects/tp-ia-2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/czarhrs/CLionProjects/tp-ia-2 /home/czarhrs/CLionProjects/tp-ia-2 /home/czarhrs/CLionProjects/tp-ia-2/cmake-build-debug /home/czarhrs/CLionProjects/tp-ia-2/cmake-build-debug /home/czarhrs/CLionProjects/tp-ia-2/cmake-build-debug/CMakeFiles/tp-ia-1.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/tp-ia-1.dir/depend

