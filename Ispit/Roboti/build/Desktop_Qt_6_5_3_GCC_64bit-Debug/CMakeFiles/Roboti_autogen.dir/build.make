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
CMAKE_COMMAND = /home/natasa/Qt/Tools/CMake/bin/cmake

# The command to remove a file.
RM = /home/natasa/Qt/Tools/CMake/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/Roboti

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/Roboti/build/Desktop_Qt_6_5_3_GCC_64bit-Debug

# Utility rule file for Roboti_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/Roboti_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Roboti_autogen.dir/progress.make

CMakeFiles/Roboti_autogen: Roboti_autogen/timestamp

Roboti_autogen/timestamp: /home/natasa/Qt/6.5.3/gcc_64/./libexec/moc
Roboti_autogen/timestamp: /home/natasa/Qt/6.5.3/gcc_64/./libexec/uic
Roboti_autogen/timestamp: CMakeFiles/Roboti_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/Roboti/build/Desktop_Qt_6_5_3_GCC_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target Roboti"
	/home/natasa/Qt/Tools/CMake/bin/cmake -E cmake_autogen /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/Roboti/build/Desktop_Qt_6_5_3_GCC_64bit-Debug/CMakeFiles/Roboti_autogen.dir/AutogenInfo.json Debug
	/home/natasa/Qt/Tools/CMake/bin/cmake -E touch /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/Roboti/build/Desktop_Qt_6_5_3_GCC_64bit-Debug/Roboti_autogen/timestamp

Roboti_autogen: CMakeFiles/Roboti_autogen
Roboti_autogen: Roboti_autogen/timestamp
Roboti_autogen: CMakeFiles/Roboti_autogen.dir/build.make
.PHONY : Roboti_autogen

# Rule to build all files generated by this target.
CMakeFiles/Roboti_autogen.dir/build: Roboti_autogen
.PHONY : CMakeFiles/Roboti_autogen.dir/build

CMakeFiles/Roboti_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Roboti_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Roboti_autogen.dir/clean

CMakeFiles/Roboti_autogen.dir/depend:
	cd /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/Roboti/build/Desktop_Qt_6_5_3_GCC_64bit-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/Roboti /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/Roboti /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/Roboti/build/Desktop_Qt_6_5_3_GCC_64bit-Debug /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/Roboti/build/Desktop_Qt_6_5_3_GCC_64bit-Debug /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/Roboti/build/Desktop_Qt_6_5_3_GCC_64bit-Debug/CMakeFiles/Roboti_autogen.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Roboti_autogen.dir/depend

