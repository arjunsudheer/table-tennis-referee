#include "TableTennisCamera.h"


class PlayerViewCamera : public TableTennisCamera {
public:
    // calls the base class constructor
    PlayerViewCamera(int portNumber = 0, std::string cameraName = "Player View Camera");
    /// overloaded constructor for testing
    PlayerViewCamera(std::string videoPath, std::string cameraName = "Player View Camera");
    // calls the base class destructor
    ~PlayerViewCamera();
    // returns true if the ball makes contact with the table (the ball bounced), and false otherwise, and also checks if the serve is diagonal
    bool checkBounce() override;
    // returns true if the player hit the ball with their paddle, and false otherwise
    bool paddleHitBall();
};
