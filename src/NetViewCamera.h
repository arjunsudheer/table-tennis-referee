#include "TableTennisCamera.h"


class NetViewCamera : public TableTennisCamera {
public:
    // calls the base class constructor
    NetViewCamera(int portNumber = 0, std::string cameraName = "Net View Camera");
    // overloaded constructor used for testing
    NetViewCamera(std::string videoPath, std::string cameraName = "Net View Camera");
    // calls the base class destructor
    ~NetViewCamera();
    // returns true if the ball hits the net, and false otherwise
    bool ballHitNet();
    // display annotations for the table, ball, and net
    void displayAnnotations() override;
};
