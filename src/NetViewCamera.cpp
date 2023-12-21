#include "NetViewCamera.h"


// calls the base class constructor
NetViewCamera::NetViewCamera(int portNumber, std::string cameraName) : TableTennisCamera(portNumber, cameraName) {}

NetViewCamera::~NetViewCamera() {}

// display annotations for the table, ball, and net
void NetViewCamera::displayAnnotations() {
    TableTennisCamera::displayAnnotations();
    // add an additional annotation for the net
    std::cout << "In derived class of displayAnnotations()" << std::endl;
}

// returns true if the ball hits the net, and false otherwise
bool NetViewCamera::ballHitNet() {
    TableTennisCamera::getNextFrame();
    return true;
}
