#ifndef CALIBHANDLER_H
#define CALIBHANDLER_H

#include <opencv2/opencv.hpp>

#include <string>
#include <vector>
#include <memory>

namespace rs
{

class CalibHandler
{
public:

    explicit CalibHandler(const std::string& calibImgPath);

    ~CalibHandler();

private:
    bool calculateImagePts(const std::vector<cv::Point3f>& objPts, std::vector<cv::Point2f>& imgPts);
     
    std::vector<cv::Point3f> m_calibObjPoints;
    std::vector<cv::Point2f> m_calibImgPoints;
};

}

#endif