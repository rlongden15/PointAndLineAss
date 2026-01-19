#include <iostream>
#include "line.hpp"
#include <cmath>

line::line(double x1, double y1, double x2, double y2) : p1(x1, y1), p2(x2, y2) {
    createXY();
}
void line::createXY(){
    x1 = p1.GetX();
    y1 = p1.GetY();
    x2 = p2.GetX();
    y2 = p2.GetY();
}
//Calculate its length
double line::length(){
    
    double a = (x2 - x1) * (x2 - x1);
    double b = (y2 - y1) * (y2 - y1);
    double x = sqrt(a + b);
    x = round(x * 10) / 10;
    return x; 

}

double line::slope(){
    double yVals = (y2 - y1);
    double xVals = (x2 - x1);
    double slope = yVals / xVals;
    slope = round(slope * 10) / 10;
    return slope;
}

//

