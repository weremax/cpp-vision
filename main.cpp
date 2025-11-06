#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;

int main() {
  cv::Mat image = cv::imread("Brazo_Robotico.png");

  if(image.empty()) {
    cerr << "Failed, we can't load image" << endl;
    return 1;
  }

  cv::imshow("Brazo Robotico", image);
  cv::waitKey(0);

  return 0;
}
