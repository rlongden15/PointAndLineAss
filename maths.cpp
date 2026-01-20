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

void line::extendLine(double d){
    double Vlength = length();
    double newX1 = x1 - ( d * (x2- x1/Vlength));
    double newY2 = y1 - ( d * (y2- y1/Vlength));
    double newX2 = x2 + (d * (x2 - x1/ Vlength));
    double newY1 = y2 + (d * (y2 - y1/ Vlength));
    newX1 = round(newX1 * 10) / 10;
    newY2 = round(newY2 * 10) / 10;
    newX2 = round(newX2 * 10) / 10;
    newY1 = round(newY1 * 10) / 10;
    p1 = point(newX1, newY2);
    p2 = point(newX2, newY1);
    createXY();
}

double line::getXval1(){
    return x1;
}
double line::getYval1(){
    return y1;
}
double line::getXval2(){
    return x2;
}
double line::getYval2(){
    return y2;
}

void line::print()
{
    cout << "Point 1: [X: " << x1 << ",Y: " << y1 << "],";
    cout << "Point 1: [X: " << x2 << ",Y: " << y2 << "],";
    cout << " Length: " << length();
}
