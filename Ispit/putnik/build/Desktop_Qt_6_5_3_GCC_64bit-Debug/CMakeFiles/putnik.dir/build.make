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
CMAKE_SOURCE_DIR = /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/build/Desktop_Qt_6_5_3_GCC_64bit-Debug

# Include any dependencies generated for this target.
include CMakeFiles/putnik.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/putnik.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/putnik.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/putnik.dir/flags.make

putnik_autogen/timestamp: /home/natasa/Qt/6.5.3/gcc_64/./libexec/moc
putnik_autogen/timestamp: /home/natasa/Qt/6.5.3/gcc_64/./libexec/uic
putnik_autogen/timestamp: CMakeFiles/putnik.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/build/Desktop_Qt_6_5_3_GCC_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target putnik"
	/home/natasa/Qt/Tools/CMake/bin/cmake -E cmake_autogen /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/build/Desktop_Qt_6_5_3_GCC_64bit-Debug/CMakeFiles/putnik_autogen.dir/AutogenInfo.json Debug
	/home/natasa/Qt/Tools/CMake/bin/cmake -E touch /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/build/Desktop_Qt_6_5_3_GCC_64bit-Debug/putnik_autogen/timestamp

CMakeFiles/putnik.dir/putnik_autogen/mocs_compilation.cpp.o: CMakeFiles/putnik.dir/flags.make
CMakeFiles/putnik.dir/putnik_autogen/mocs_compilation.cpp.o: putnik_autogen/mocs_compilation.cpp
CMakeFiles/putnik.dir/putnik_autogen/mocs_compilation.cpp.o: CMakeFiles/putnik.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/build/Desktop_Qt_6_5_3_GCC_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/putnik.dir/putnik_autogen/mocs_compilation.cpp.o"
	/usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/putnik.dir/putnik_autogen/mocs_compilation.cpp.o -MF CMakeFiles/putnik.dir/putnik_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/putnik.dir/putnik_autogen/mocs_compilation.cpp.o -c /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/build/Desktop_Qt_6_5_3_GCC_64bit-Debug/putnik_autogen/mocs_compilation.cpp

CMakeFiles/putnik.dir/putnik_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/putnik.dir/putnik_autogen/mocs_compilation.cpp.i"
	/usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/build/Desktop_Qt_6_5_3_GCC_64bit-Debug/putnik_autogen/mocs_compilation.cpp > CMakeFiles/putnik.dir/putnik_autogen/mocs_compilation.cpp.i

CMakeFiles/putnik.dir/putnik_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/putnik.dir/putnik_autogen/mocs_compilation.cpp.s"
	/usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/build/Desktop_Qt_6_5_3_GCC_64bit-Debug/putnik_autogen/mocs_compilation.cpp -o CMakeFiles/putnik.dir/putnik_autogen/mocs_compilation.cpp.s

CMakeFiles/putnik.dir/main.cpp.o: CMakeFiles/putnik.dir/flags.make
CMakeFiles/putnik.dir/main.cpp.o: /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/main.cpp
CMakeFiles/putnik.dir/main.cpp.o: CMakeFiles/putnik.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/build/Desktop_Qt_6_5_3_GCC_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/putnik.dir/main.cpp.o"
	/usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/putnik.dir/main.cpp.o -MF CMakeFiles/putnik.dir/main.cpp.o.d -o CMakeFiles/putnik.dir/main.cpp.o -c /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/main.cpp

CMakeFiles/putnik.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/putnik.dir/main.cpp.i"
	/usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/main.cpp > CMakeFiles/putnik.dir/main.cpp.i

CMakeFiles/putnik.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/putnik.dir/main.cpp.s"
	/usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/main.cpp -o CMakeFiles/putnik.dir/main.cpp.s

CMakeFiles/putnik.dir/Widget.cpp.o: CMakeFiles/putnik.dir/flags.make
CMakeFiles/putnik.dir/Widget.cpp.o: /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/Widget.cpp
CMakeFiles/putnik.dir/Widget.cpp.o: CMakeFiles/putnik.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/build/Desktop_Qt_6_5_3_GCC_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/putnik.dir/Widget.cpp.o"
	/usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/putnik.dir/Widget.cpp.o -MF CMakeFiles/putnik.dir/Widget.cpp.o.d -o CMakeFiles/putnik.dir/Widget.cpp.o -c /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/Widget.cpp

CMakeFiles/putnik.dir/Widget.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/putnik.dir/Widget.cpp.i"
	/usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/Widget.cpp > CMakeFiles/putnik.dir/Widget.cpp.i

CMakeFiles/putnik.dir/Widget.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/putnik.dir/Widget.cpp.s"
	/usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/Widget.cpp -o CMakeFiles/putnik.dir/Widget.cpp.s

CMakeFiles/putnik.dir/City.cpp.o: CMakeFiles/putnik.dir/flags.make
CMakeFiles/putnik.dir/City.cpp.o: /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/City.cpp
CMakeFiles/putnik.dir/City.cpp.o: CMakeFiles/putnik.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/build/Desktop_Qt_6_5_3_GCC_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/putnik.dir/City.cpp.o"
	/usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/putnik.dir/City.cpp.o -MF CMakeFiles/putnik.dir/City.cpp.o.d -o CMakeFiles/putnik.dir/City.cpp.o -c /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/City.cpp

CMakeFiles/putnik.dir/City.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/putnik.dir/City.cpp.i"
	/usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/City.cpp > CMakeFiles/putnik.dir/City.cpp.i

CMakeFiles/putnik.dir/City.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/putnik.dir/City.cpp.s"
	/usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/City.cpp -o CMakeFiles/putnik.dir/City.cpp.s

CMakeFiles/putnik.dir/CityThread.cpp.o: CMakeFiles/putnik.dir/flags.make
CMakeFiles/putnik.dir/CityThread.cpp.o: /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/CityThread.cpp
CMakeFiles/putnik.dir/CityThread.cpp.o: CMakeFiles/putnik.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/build/Desktop_Qt_6_5_3_GCC_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/putnik.dir/CityThread.cpp.o"
	/usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/putnik.dir/CityThread.cpp.o -MF CMakeFiles/putnik.dir/CityThread.cpp.o.d -o CMakeFiles/putnik.dir/CityThread.cpp.o -c /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/CityThread.cpp

CMakeFiles/putnik.dir/CityThread.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/putnik.dir/CityThread.cpp.i"
	/usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/CityThread.cpp > CMakeFiles/putnik.dir/CityThread.cpp.i

CMakeFiles/putnik.dir/CityThread.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/putnik.dir/CityThread.cpp.s"
	/usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/CityThread.cpp -o CMakeFiles/putnik.dir/CityThread.cpp.s

# Object files for target putnik
putnik_OBJECTS = \
"CMakeFiles/putnik.dir/putnik_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/putnik.dir/main.cpp.o" \
"CMakeFiles/putnik.dir/Widget.cpp.o" \
"CMakeFiles/putnik.dir/City.cpp.o" \
"CMakeFiles/putnik.dir/CityThread.cpp.o"

# External object files for target putnik
putnik_EXTERNAL_OBJECTS =

putnik: CMakeFiles/putnik.dir/putnik_autogen/mocs_compilation.cpp.o
putnik: CMakeFiles/putnik.dir/main.cpp.o
putnik: CMakeFiles/putnik.dir/Widget.cpp.o
putnik: CMakeFiles/putnik.dir/City.cpp.o
putnik: CMakeFiles/putnik.dir/CityThread.cpp.o
putnik: CMakeFiles/putnik.dir/build.make
putnik: /home/natasa/Qt/6.5.3/gcc_64/lib/libQt6Widgets.so.6.5.3
putnik: /home/natasa/Qt/6.5.3/gcc_64/lib/libQt6Gui.so.6.5.3
putnik: /home/natasa/Qt/6.5.3/gcc_64/lib/libQt6Core.so.6.5.3
putnik: /usr/lib/x86_64-linux-gnu/libGLX.so
putnik: /usr/lib/x86_64-linux-gnu/libOpenGL.so
putnik: CMakeFiles/putnik.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/build/Desktop_Qt_6_5_3_GCC_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable putnik"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/putnik.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/putnik.dir/build: putnik
.PHONY : CMakeFiles/putnik.dir/build

CMakeFiles/putnik.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/putnik.dir/cmake_clean.cmake
.PHONY : CMakeFiles/putnik.dir/clean

CMakeFiles/putnik.dir/depend: putnik_autogen/timestamp
	cd /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/build/Desktop_Qt_6_5_3_GCC_64bit-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/build/Desktop_Qt_6_5_3_GCC_64bit-Debug /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/build/Desktop_Qt_6_5_3_GCC_64bit-Debug /home/natasa/Desktop/Fakultet/4.god/7.sem/rs/Ispit/putnik/build/Desktop_Qt_6_5_3_GCC_64bit-Debug/CMakeFiles/putnik.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/putnik.dir/depend
