#include "main.h"


int main() {
    std::string ttMatch = "../assets/NetMatch.mp4";
    NetViewCamera nvc(ttMatch);
    // NetViewCamera* nvc = new NetViewCamera(ttMatch);
    while (true) {
        nvc.getNextFrame();
        nvc.getImage();
        cv::waitKey(1);
    }
    cv::destroyAllWindows();
    return 0;
}