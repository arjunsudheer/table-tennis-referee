#include "TableTennisCamera.h"


// create a VideoCapture object to access camera frames, then capture the first frame of the camera feed
TableTennisCamera::TableTennisCamera(int portNumber, std::string name) {
    // set the camera name to the specified name
    m_cameraName = name;
    // create a new VideoCapture device with the specified port number, or 0 by default
    cv::VideoCapture capture(portNumber);
    // verify if the VideoCapture device was opened
    if (!capture.isOpened()) {
        std::cerr << "VideoCapture device was not opened!" << std::endl;
    }
    // store the VideoCapture instance in the camera private member variable
    m_camera = capture;
}

// overloaded constructor used for testing
TableTennisCamera::TableTennisCamera(std::string videoPath, std::string name) {
    // set the camera name to the specified name
    m_cameraName = name;
    // create a new VideoCapture device with the specified port number, or 0 by default
    cv::VideoCapture capture(videoPath);
    // verify if the VideoCapture device was opened
    if (!capture.isOpened()) {
        std::cerr << "VideoCapture device was not opened!" << std::endl;
    }
    // store the VideoCapture instance in the camera private member variable
    m_camera = capture;
}

// when destroyed, close the camera feed
TableTennisCamera::~TableTennisCamera() {
    m_camera.release();
}

// updates the m_image member variable with the most recent camera feed frame
void TableTennisCamera::getNextFrame() {
    // throw an EndOfStreamException if the VideoCapture device was not able to retrieve the next frame in the camera feed
    if (!m_camera.read(m_image)) {
        try {
            throw EndOfStreamException(m_cameraName + " could not capture the next frame.");
        } catch (EndOfStreamException e) {
            std::cout << e.what() << std::endl;
        }
    }
    cv::imshow("Image", m_image);
}

/** 
 * Will display the following annotations:
 * 
 * Table tennis table - purple square
 * Table tennis ball - green square
*/
void TableTennisCamera::displayAnnotations() {
    std::cout << "In parent class of displayAnnotations()" << std::endl;
}

// returns true if the ball makes contact with the table (the ball bounced), and false otherwise
bool TableTennisCamera::checkBounce() {
    std::cout << "In parent class of checkBounce()" << std::endl;
    return true;
}

// returns true if the ball hits the ground, and false otherwise
bool TableTennisCamera::hitGround() {
    return true;
}

// returns the most recent image taken from the VideoCapture device with annotations displayed
cv::Mat TableTennisCamera::getImage() {
    displayAnnotations();
    return m_image;
}
