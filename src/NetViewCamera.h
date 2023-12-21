#pragma once
#include "GenericIncludes.h"
#include "TableTennisCamera.cpp"

// use a struct so that the defined methods are public by default
struct NetViewCamera : public TableTennisCamera {
    // calls the base class constructor
    NetViewCamera(int portNumber = 0, std::string cameraName = "Net View Camera");
    // calls the base class destructor
    ~NetViewCamera();
    // display annotations for the table, ball, and net
    void displayAnnotations() override;
    // returns true if the ball hits the net, and false otherwise
    bool ballHitNet();
};
