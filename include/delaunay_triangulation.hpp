#ifndef DELAUNAY_TRIANGULATION_HPP
#define DELAUNAY_TRIANGULATION_HPP

#include <opencv2/opencv.hpp>
#include "../ThirdParty/triangulation/DelaunayTriangulation.h"
#include <iostream>
#include <cmath>

namespace Hypertun_SR
{
    void delaunay_triangulation(cv::Mat &S, cv::Mat &G, cv::Mat &T, cv::Mat &E);
}

#endif // DELAUNAY_TRIANGULATION_HPP