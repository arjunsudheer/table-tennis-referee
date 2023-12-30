cmake_minimum_required(VERSION 3.10)
project(MyProject)
set (MyProject_SOURCES
    ./src/TableTennisCamera.cpp
    ./src/TableTennisCamera.h
    ./src/NetViewCamera.cpp
    ./src/NetViewCamera.h
    ./src/PlayerViewCamera.cpp
    ./src/PlayerViewCamera.h
    ./src/main.cpp
    ./src/main.h
    ./src/GenericIncludes.h
)
find_package(OpenCV REQUIRED)
add_executable(MyProject ${MyProject_SOURCES})
target_link_libraries(MyProject ${OpenCV_LIBS})
