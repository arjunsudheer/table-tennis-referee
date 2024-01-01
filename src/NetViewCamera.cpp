#include "NetViewCamera.h"


// calls the base class constructor
NetViewCamera::NetViewCamera(int portNumber, std::string cameraName) : TableTennisCamera(portNumber, cameraName) {}

// overloaded constructor used for testing
NetViewCamera::NetViewCamera(std::string videoPath, std::string cameraName) : TableTennisCamera(videoPath, cameraName) {}

NetViewCamera::~NetViewCamera() {}

// returns true if the ball hits the net, and false otherwise
bool NetViewCamera::ballHitNet() {
    return true;
}

// display annotations for the table, ball, and net
void NetViewCamera::displayAnnotations() {
    TableTennisCamera::displayAnnotations();
    // add an additional annotation for the net
    std::cout << "In derived class of displayAnnotations()" << std::endl;
}
