#include <iostream>
using namespace std;
#include "point.hpp"


class line{
    public:
    line(double x1, double y1, double x2, double y2);
    double length();
    double slope();
    void createXY();
    bool specPointOnLine(double x, double y);
    void extendLine(double d);
    point midPoint();


    private:
    double x1;
    double x2;
    double y1;
    double y2;
    point p1;
    point p2;
};