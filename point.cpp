
#include "point.hpp"
#include <cmath>

point::point(double xVal, double yVal){
    AssignVals(xVal, yVal);
}

void point::AssignVals(double xVal, double yVal){
    if(xVal < 0){
        xVal =  0;
    }
    if(yVal < 0){
        yVal = 0;
    }
    SetX(xVal);
    SetY(yVal);
}

void point::SetX(double xVal){
    x = round(xVal * 10) / 10;
}

void point::SetY(double yVal){
    y = round(yVal * 10) / 10;
}

double point::GetX() const{
    return x;
}

double point::GetY() const{
    return y;
}
