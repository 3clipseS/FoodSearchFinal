# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2024.2.1\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2024.2.1\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\thesa\Desktop\Desktop\Development\C++\FoodSearch-main

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\thesa\Desktop\Desktop\Development\C++\FoodSearch-main\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/FoodSearch.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/FoodSearch.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/FoodSearch.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FoodSearch.dir/flags.make

CMakeFiles/FoodSearch.dir/src/Food.cpp.obj: CMakeFiles/FoodSearch.dir/flags.make
CMakeFiles/FoodSearch.dir/src/Food.cpp.obj: C:/Users/thesa/Desktop/Desktop/Development/C++/FoodSearch-main/src/Food.cpp
CMakeFiles/FoodSearch.dir/src/Food.cpp.obj: CMakeFiles/FoodSearch.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\thesa\Desktop\Desktop\Development\C++\FoodSearch-main\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FoodSearch.dir/src/Food.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FoodSearch.dir/src/Food.cpp.obj -MF CMakeFiles\FoodSearch.dir\src\Food.cpp.obj.d -o CMakeFiles\FoodSearch.dir\src\Food.cpp.obj -c C:\Users\thesa\Desktop\Desktop\Development\C++\FoodSearch-main\src\Food.cpp

CMakeFiles/FoodSearch.dir/src/Food.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/FoodSearch.dir/src/Food.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\thesa\Desktop\Desktop\Development\C++\FoodSearch-main\src\Food.cpp > CMakeFiles\FoodSearch.dir\src\Food.cpp.i

CMakeFiles/FoodSearch.dir/src/Food.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/FoodSearch.dir/src/Food.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\thesa\Desktop\Desktop\Development\C++\FoodSearch-main\src\Food.cpp -o CMakeFiles\FoodSearch.dir\src\Food.cpp.s

CMakeFiles/FoodSearch.dir/src/main.cpp.obj: CMakeFiles/FoodSearch.dir/flags.make
CMakeFiles/FoodSearch.dir/src/main.cpp.obj: C:/Users/thesa/Desktop/Desktop/Development/C++/FoodSearch-main/src/main.cpp
CMakeFiles/FoodSearch.dir/src/main.cpp.obj: CMakeFiles/FoodSearch.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\thesa\Desktop\Desktop\Development\C++\FoodSearch-main\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/FoodSearch.dir/src/main.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FoodSearch.dir/src/main.cpp.obj -MF CMakeFiles\FoodSearch.dir\src\main.cpp.obj.d -o CMakeFiles\FoodSearch.dir\src\main.cpp.obj -c C:\Users\thesa\Desktop\Desktop\Development\C++\FoodSearch-main\src\main.cpp

CMakeFiles/FoodSearch.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/FoodSearch.dir/src/main.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\thesa\Desktop\Desktop\Development\C++\FoodSearch-main\src\main.cpp > CMakeFiles\FoodSearch.dir\src\main.cpp.i

CMakeFiles/FoodSearch.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/FoodSearch.dir/src/main.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\thesa\Desktop\Desktop\Development\C++\FoodSearch-main\src\main.cpp -o CMakeFiles\FoodSearch.dir\src\main.cpp.s

CMakeFiles/FoodSearch.dir/src/FoodHashTable.cpp.obj: CMakeFiles/FoodSearch.dir/flags.make
CMakeFiles/FoodSearch.dir/src/FoodHashTable.cpp.obj: C:/Users/thesa/Desktop/Desktop/Development/C++/FoodSearch-main/src/FoodHashTable.cpp
CMakeFiles/FoodSearch.dir/src/FoodHashTable.cpp.obj: CMakeFiles/FoodSearch.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\thesa\Desktop\Desktop\Development\C++\FoodSearch-main\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/FoodSearch.dir/src/FoodHashTable.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FoodSearch.dir/src/FoodHashTable.cpp.obj -MF CMakeFiles\FoodSearch.dir\src\FoodHashTable.cpp.obj.d -o CMakeFiles\FoodSearch.dir\src\FoodHashTable.cpp.obj -c C:\Users\thesa\Desktop\Desktop\Development\C++\FoodSearch-main\src\FoodHashTable.cpp

CMakeFiles/FoodSearch.dir/src/FoodHashTable.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/FoodSearch.dir/src/FoodHashTable.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\thesa\Desktop\Desktop\Development\C++\FoodSearch-main\src\FoodHashTable.cpp > CMakeFiles\FoodSearch.dir\src\FoodHashTable.cpp.i

CMakeFiles/FoodSearch.dir/src/FoodHashTable.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/FoodSearch.dir/src/FoodHashTable.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\thesa\Desktop\Desktop\Development\C++\FoodSearch-main\src\FoodHashTable.cpp -o CMakeFiles\FoodSearch.dir\src\FoodHashTable.cpp.s

CMakeFiles/FoodSearch.dir/src/FoodGraph.cpp.obj: CMakeFiles/FoodSearch.dir/flags.make
CMakeFiles/FoodSearch.dir/src/FoodGraph.cpp.obj: C:/Users/thesa/Desktop/Desktop/Development/C++/FoodSearch-main/src/FoodGraph.cpp
CMakeFiles/FoodSearch.dir/src/FoodGraph.cpp.obj: CMakeFiles/FoodSearch.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\thesa\Desktop\Desktop\Development\C++\FoodSearch-main\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/FoodSearch.dir/src/FoodGraph.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FoodSearch.dir/src/FoodGraph.cpp.obj -MF CMakeFiles\FoodSearch.dir\src\FoodGraph.cpp.obj.d -o CMakeFiles\FoodSearch.dir\src\FoodGraph.cpp.obj -c C:\Users\thesa\Desktop\Desktop\Development\C++\FoodSearch-main\src\FoodGraph.cpp

CMakeFiles/FoodSearch.dir/src/FoodGraph.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/FoodSearch.dir/src/FoodGraph.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\thesa\Desktop\Desktop\Development\C++\FoodSearch-main\src\FoodGraph.cpp > CMakeFiles\FoodSearch.dir\src\FoodGraph.cpp.i

CMakeFiles/FoodSearch.dir/src/FoodGraph.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/FoodSearch.dir/src/FoodGraph.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\thesa\Desktop\Desktop\Development\C++\FoodSearch-main\src\FoodGraph.cpp -o CMakeFiles\FoodSearch.dir\src\FoodGraph.cpp.s

# Object files for target FoodSearch
FoodSearch_OBJECTS = \
"CMakeFiles/FoodSearch.dir/src/Food.cpp.obj" \
"CMakeFiles/FoodSearch.dir/src/main.cpp.obj" \
"CMakeFiles/FoodSearch.dir/src/FoodHashTable.cpp.obj" \
"CMakeFiles/FoodSearch.dir/src/FoodGraph.cpp.obj"

# External object files for target FoodSearch
FoodSearch_EXTERNAL_OBJECTS =

FoodSearch.exe: CMakeFiles/FoodSearch.dir/src/Food.cpp.obj
FoodSearch.exe: CMakeFiles/FoodSearch.dir/src/main.cpp.obj
FoodSearch.exe: CMakeFiles/FoodSearch.dir/src/FoodHashTable.cpp.obj
FoodSearch.exe: CMakeFiles/FoodSearch.dir/src/FoodGraph.cpp.obj
FoodSearch.exe: CMakeFiles/FoodSearch.dir/build.make
FoodSearch.exe: CMakeFiles/FoodSearch.dir/linkLibs.rsp
FoodSearch.exe: CMakeFiles/FoodSearch.dir/objects1.rsp
FoodSearch.exe: CMakeFiles/FoodSearch.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\thesa\Desktop\Desktop\Development\C++\FoodSearch-main\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable FoodSearch.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\FoodSearch.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FoodSearch.dir/build: FoodSearch.exe
.PHONY : CMakeFiles/FoodSearch.dir/build

CMakeFiles/FoodSearch.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\FoodSearch.dir\cmake_clean.cmake
.PHONY : CMakeFiles/FoodSearch.dir/clean

CMakeFiles/FoodSearch.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\thesa\Desktop\Desktop\Development\C++\FoodSearch-main C:\Users\thesa\Desktop\Desktop\Development\C++\FoodSearch-main C:\Users\thesa\Desktop\Desktop\Development\C++\FoodSearch-main\cmake-build-debug C:\Users\thesa\Desktop\Desktop\Development\C++\FoodSearch-main\cmake-build-debug C:\Users\thesa\Desktop\Desktop\Development\C++\FoodSearch-main\cmake-build-debug\CMakeFiles\FoodSearch.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/FoodSearch.dir/depend

