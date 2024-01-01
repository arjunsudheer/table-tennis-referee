#include "PlayerViewCamera.h"


// calls the base class constructor
PlayerViewCamera::PlayerViewCamera(int portNumber, std::string cameraName) : TableTennisCamera(portNumber, cameraName) {}

// overloaded constructor for testing
PlayerViewCamera::PlayerViewCamera(std::string videoPath, std::string cameraName) : TableTennisCamera(videoPath, cameraName) {}

// calls the base class destructor
PlayerViewCamera::~PlayerViewCamera() {}

// returns true if the ball makes contact with the table (the ball bounced), and false otherwise, and also checks if the serve is diagonal
bool PlayerViewCamera::checkBounce() {
    std::cout << "In derived class of checkBounce()" << std::endl;
    return true;
}
// returns true if the player hit the ball with their paddle, and false otherwise
bool PlayerViewCamera::paddleHitBall() {
    return true;
}
