# Table Tennis Referee

Table Tennis Referee is a computer vision software that can referee your table tennis games for you. It uses the C++ openCV lubrary with a four camera system to track the table tennis ball and refereee your table tennis games for you.

## Building the project using the ```CMakeLists.txt``` file

The CMakeLists.txt file can be used to build this table tennis referee project. The CMakeLists.txt is provided for you in this repository, and you should use this file to set up your build directory. To build and execute this project using the provided CMakeLists.txt file, follow these steps:

1. If you already aren't in the ```table-tennis-referee``` project directory, then please change your present working directory to the ```table-tennis-referee``` directory using the follow command, where <path to project> should be replaced with the absolute path to the ```table-tennis-referee``` project directory on your computer
```cd <path to project>```

2. Create the build directory using the following command
```mkdir build```

3. Change your present working directory to the build directory you just created by executing the following command
```cd build```

4. Generate your CMake files by running the following command inside the build directory
```cmake ..```

5. Compile and link your source files and generate the machine executable code by running the following commmand
```make```

6. In your build directory, you should have a file called "MyProject" which was specified in the CMakeLists.txt file. To run your code, you can execute this file. Assuming you are still in the build directory, you can use the following command
```./MyProject```