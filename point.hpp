#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

class point{
    public:
    point(double xVal, double yVal);
    double GetX() const;
    double GetY() const;

    private:
    void AssignVals(double xVal, double yVal);
    void SetX(double xVal);
    void SetY(double yVal);
    double x;
    double y;
};

#endif