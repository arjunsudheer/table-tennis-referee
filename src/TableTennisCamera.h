#pragma once
#include "GenericIncludes.h"

// use a struct so that the defined methods are public by default
struct TableTennisCamera {
    // stores the name given to this TableTennisCamera object
    std::string m_cameraName;

    // create a VideoCapture object to access camera frames, then capture the first frame of the camera feed
    TableTennisCamera(int portNumber = 0, std::string name = "Table Tennis Camera");
    // when destroyed, close the camera feed
    ~TableTennisCamera();
    /** 
     * Will display the following annotations:
     * 
     * Table tennis table - purple square
     * Table tennis ball - green square
    */
    virtual void displayAnnotations();
    // returns true if the ball makes contact with the table (the ball bounced), and false otherwise
    virtual bool checkBounce();
    // returns true if the ball hits the ground, and false otherwise
    bool hitGround();
    // returns the most recent image taken from the VideoCapture device
    cv::Mat getImage() const;
protected:
    // stores the most recent image for image analysis
    cv::Mat m_image;

    // updates the image member variable with the most recent camera feed frame
    void getNextFrame();
private:
    // stores the VideoCapture device created in the constructor
    cv::VideoCapture m_camera;
};
