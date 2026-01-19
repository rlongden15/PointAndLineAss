#include <iostream>
#include "line.hpp"


line :: line (point one, point two){
    p1 = one;
    p2 = two;
}

//Calculate its length


double line::length(point p1, point p2){
    double x1 = p1.GetX();
    double y1 = p1.GetY();
    double x2 = p2.GetX();
    double y2 = p2.GetY();
    
    double a = x1 - x2;
    double b = y1 - y2;
    double sqrt((a * a) + (b * b));
    return sqrt; 

}

