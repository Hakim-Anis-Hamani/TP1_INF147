# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\jayce\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\jayce\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\jayce\Documents\INF147\TP1_INF147\H2024TP1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\jayce\Documents\INF147\TP1_INF147\H2024TP1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/H2024TP1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/H2024TP1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/H2024TP1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/H2024TP1.dir/flags.make

CMakeFiles/H2024TP1.dir/main.c.obj: CMakeFiles/H2024TP1.dir/flags.make
CMakeFiles/H2024TP1.dir/main.c.obj: C:/Users/jayce/Documents/INF147/TP1_INF147/H2024TP1/main.c
CMakeFiles/H2024TP1.dir/main.c.obj: CMakeFiles/H2024TP1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\jayce\Documents\INF147\TP1_INF147\H2024TP1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/H2024TP1.dir/main.c.obj"
	C:\Users\jayce\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/H2024TP1.dir/main.c.obj -MF CMakeFiles\H2024TP1.dir\main.c.obj.d -o CMakeFiles\H2024TP1.dir\main.c.obj -c C:\Users\jayce\Documents\INF147\TP1_INF147\H2024TP1\main.c

CMakeFiles/H2024TP1.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/H2024TP1.dir/main.c.i"
	C:\Users\jayce\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\jayce\Documents\INF147\TP1_INF147\H2024TP1\main.c > CMakeFiles\H2024TP1.dir\main.c.i

CMakeFiles/H2024TP1.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/H2024TP1.dir/main.c.s"
	C:\Users\jayce\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\jayce\Documents\INF147\TP1_INF147\H2024TP1\main.c -o CMakeFiles\H2024TP1.dir\main.c.s

CMakeFiles/H2024TP1.dir/test.c.obj: CMakeFiles/H2024TP1.dir/flags.make
CMakeFiles/H2024TP1.dir/test.c.obj: C:/Users/jayce/Documents/INF147/TP1_INF147/H2024TP1/test.c
CMakeFiles/H2024TP1.dir/test.c.obj: CMakeFiles/H2024TP1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\jayce\Documents\INF147\TP1_INF147\H2024TP1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/H2024TP1.dir/test.c.obj"
	C:\Users\jayce\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/H2024TP1.dir/test.c.obj -MF CMakeFiles\H2024TP1.dir\test.c.obj.d -o CMakeFiles\H2024TP1.dir\test.c.obj -c C:\Users\jayce\Documents\INF147\TP1_INF147\H2024TP1\test.c

CMakeFiles/H2024TP1.dir/test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/H2024TP1.dir/test.c.i"
	C:\Users\jayce\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\jayce\Documents\INF147\TP1_INF147\H2024TP1\test.c > CMakeFiles\H2024TP1.dir\test.c.i

CMakeFiles/H2024TP1.dir/test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/H2024TP1.dir/test.c.s"
	C:\Users\jayce\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\jayce\Documents\INF147\TP1_INF147\H2024TP1\test.c -o CMakeFiles\H2024TP1.dir\test.c.s

CMakeFiles/H2024TP1.dir/decodeur/a429.c.obj: CMakeFiles/H2024TP1.dir/flags.make
CMakeFiles/H2024TP1.dir/decodeur/a429.c.obj: C:/Users/jayce/Documents/INF147/TP1_INF147/H2024TP1/decodeur/a429.c
CMakeFiles/H2024TP1.dir/decodeur/a429.c.obj: CMakeFiles/H2024TP1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\jayce\Documents\INF147\TP1_INF147\H2024TP1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/H2024TP1.dir/decodeur/a429.c.obj"
	C:\Users\jayce\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/H2024TP1.dir/decodeur/a429.c.obj -MF CMakeFiles\H2024TP1.dir\decodeur\a429.c.obj.d -o CMakeFiles\H2024TP1.dir\decodeur\a429.c.obj -c C:\Users\jayce\Documents\INF147\TP1_INF147\H2024TP1\decodeur\a429.c

CMakeFiles/H2024TP1.dir/decodeur/a429.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/H2024TP1.dir/decodeur/a429.c.i"
	C:\Users\jayce\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\jayce\Documents\INF147\TP1_INF147\H2024TP1\decodeur\a429.c > CMakeFiles\H2024TP1.dir\decodeur\a429.c.i

CMakeFiles/H2024TP1.dir/decodeur/a429.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/H2024TP1.dir/decodeur/a429.c.s"
	C:\Users\jayce\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\jayce\Documents\INF147\TP1_INF147\H2024TP1\decodeur\a429.c -o CMakeFiles\H2024TP1.dir\decodeur\a429.c.s

CMakeFiles/H2024TP1.dir/decodeur/utilitaire.c.obj: CMakeFiles/H2024TP1.dir/flags.make
CMakeFiles/H2024TP1.dir/decodeur/utilitaire.c.obj: C:/Users/jayce/Documents/INF147/TP1_INF147/H2024TP1/decodeur/utilitaire.c
CMakeFiles/H2024TP1.dir/decodeur/utilitaire.c.obj: CMakeFiles/H2024TP1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\jayce\Documents\INF147\TP1_INF147\H2024TP1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/H2024TP1.dir/decodeur/utilitaire.c.obj"
	C:\Users\jayce\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/H2024TP1.dir/decodeur/utilitaire.c.obj -MF CMakeFiles\H2024TP1.dir\decodeur\utilitaire.c.obj.d -o CMakeFiles\H2024TP1.dir\decodeur\utilitaire.c.obj -c C:\Users\jayce\Documents\INF147\TP1_INF147\H2024TP1\decodeur\utilitaire.c

CMakeFiles/H2024TP1.dir/decodeur/utilitaire.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/H2024TP1.dir/decodeur/utilitaire.c.i"
	C:\Users\jayce\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\jayce\Documents\INF147\TP1_INF147\H2024TP1\decodeur\utilitaire.c > CMakeFiles\H2024TP1.dir\decodeur\utilitaire.c.i

CMakeFiles/H2024TP1.dir/decodeur/utilitaire.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/H2024TP1.dir/decodeur/utilitaire.c.s"
	C:\Users\jayce\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\jayce\Documents\INF147\TP1_INF147\H2024TP1\decodeur\utilitaire.c -o CMakeFiles\H2024TP1.dir\decodeur\utilitaire.c.s

# Object files for target H2024TP1
H2024TP1_OBJECTS = \
"CMakeFiles/H2024TP1.dir/main.c.obj" \
"CMakeFiles/H2024TP1.dir/test.c.obj" \
"CMakeFiles/H2024TP1.dir/decodeur/a429.c.obj" \
"CMakeFiles/H2024TP1.dir/decodeur/utilitaire.c.obj"

# External object files for target H2024TP1
H2024TP1_EXTERNAL_OBJECTS =

H2024TP1.exe: CMakeFiles/H2024TP1.dir/main.c.obj
H2024TP1.exe: CMakeFiles/H2024TP1.dir/test.c.obj
H2024TP1.exe: CMakeFiles/H2024TP1.dir/decodeur/a429.c.obj
H2024TP1.exe: CMakeFiles/H2024TP1.dir/decodeur/utilitaire.c.obj
H2024TP1.exe: CMakeFiles/H2024TP1.dir/build.make
H2024TP1.exe: CMakeFiles/H2024TP1.dir/linkLibs.rsp
H2024TP1.exe: CMakeFiles/H2024TP1.dir/objects1.rsp
H2024TP1.exe: CMakeFiles/H2024TP1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\jayce\Documents\INF147\TP1_INF147\H2024TP1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable H2024TP1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\H2024TP1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/H2024TP1.dir/build: H2024TP1.exe
.PHONY : CMakeFiles/H2024TP1.dir/build

CMakeFiles/H2024TP1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\H2024TP1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/H2024TP1.dir/clean

CMakeFiles/H2024TP1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\jayce\Documents\INF147\TP1_INF147\H2024TP1 C:\Users\jayce\Documents\INF147\TP1_INF147\H2024TP1 C:\Users\jayce\Documents\INF147\TP1_INF147\H2024TP1\cmake-build-debug C:\Users\jayce\Documents\INF147\TP1_INF147\H2024TP1\cmake-build-debug C:\Users\jayce\Documents\INF147\TP1_INF147\H2024TP1\cmake-build-debug\CMakeFiles\H2024TP1.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/H2024TP1.dir/depend
