#pragma once
#include "GenericIncludes.h"
#include "TableTennisCamera.cpp"

// use a struct so that the defined methods are public by default
struct PlayerViewCamera : public TableTennisCamera {
    // calls the base class constructor
    PlayerViewCamera(int portNumber = 0, std::string cameraName = "Net View Camera");
    // calls the base class destructor
    ~PlayerViewCamera();
    // returns true if the ball makes contact with the table (the ball bounced), and false otherwise, and also checks if the serve is diagonal
    bool checkBounce() override;
    // returns true if the player hit the ball with their paddle, and false otherwise
    bool paddleHitBall();
};
