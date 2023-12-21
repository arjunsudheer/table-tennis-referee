#include "PlayerViewCamera.h"


int main() {
    // create object on the Stack since this object doesn't need to exist after the main function terminates
    PlayerViewCamera ttCam;
    ttCam.getImage();
    ttCam.displayAnnotations();
    cv::Mat image = ttCam.getImage();
    
    std::cout << ttCam.m_cameraName << std::endl;

    for (int i = 0; i < 10; i++) {
        cv::imshow("Image", image);
        ttCam.checkBounce();
        cv::waitKey(0);
    }
    cv::destroyAllWindows();
    return 0;
}


// calls the base class constructor
PlayerViewCamera::PlayerViewCamera(int portNumber, std::string cameraName) : TableTennisCamera(portNumber, cameraName) {}

// calls the base class destructor
PlayerViewCamera::~PlayerViewCamera() {}

// returns true if the ball makes contact with the table (the ball bounced), and false otherwise, and also checks if the serve is diagonal
bool PlayerViewCamera::checkBounce() {
    TableTennisCamera::getNextFrame();
    std::cout << "In derived class of checkBounce()" << std::endl;
    return true;
}
// returns true if the player hit the ball with their paddle, and false otherwise
bool PlayerViewCamera::paddleHitBall() {
    TableTennisCamera::getNextFrame();
    return true;
}
