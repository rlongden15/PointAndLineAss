#include <iostream>
using namespace std;
#include "point.hpp"


class line{
    public:
    line(double x1, double y1, double x2, double y2);
    double length();

    private:
    point p1;
    point p2;
};