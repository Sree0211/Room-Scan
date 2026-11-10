#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>

#include <iostream>

int main()
{
    cv::Mat image = cv::Mat::zeros(100, 100, CV_8UC1);

    cv::circle(image, cv::Point(50, 50), 20, cv::Scalar(255), -1);

    std::cout << "OpenCV version: " << CV_VERSION << '\n';
    std::cout << "Image size: " << image.cols << " x " << image.rows << '\n';
    std::cout << "Center pixel: " << static_cast<int>(image.at<uchar>(50, 50)) << '\n';

    return 0;
}