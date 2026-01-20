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

// find if specified point is on the line
bool line::specPointOnLine(double x, double y){
    if (x2 - x1 == 0) // check for vertical lines and avoids division of 0
    {
        return round(x * 10) / 10 == round(x1 * 10) / 10; // compre both x and x1
    }

    double m = slope();
    double b = y1 - m * x1; // y = mx + b

    double left = round(y * 10) / 10;            // the actual y value we're checking
    double right = round((m * x + b) * 10) / 10; // the expected value we'er checking

    return left == right; // if they are the same send them (they are on the line)
}

// Find the midpoint of the line (returns a new Point exactly in the center of the Line)
point line::midPoint(){
    // xm = (x1 + x2) / 2 and ym = ( y1 + y2) /2
    double xm = (x1 + x2) / 2.0;
    double ym = (y1 + y2) / 2.0;
    // create the new point at the middle
    return point(xm, ym);
}

