#include <iostream>
using namespace std;
#include "point.hpp"


class line{
    public:
    line(point one, point two);
    double length(point p1, point p2);

    

    private:
    point p1;
    point p2;


};