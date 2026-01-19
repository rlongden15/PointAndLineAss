#include <iostream>
using namespace std;
#include <cmath>

class point{
    public:
    point(double xVal, double yVal);
    //checks the doubles vals are valid, if not assign -1
    //setter used within
    //round to the tenth place
    void AssignVals(double xVal, double yVal);
    //called in assignVals to set the X and Y vals
    void SetX(double xVal);
    void SetY(double yVal);
    //getters for X and Y vals
    double GetX() const;
    double GetY() const;

    private:
    double x;
    double y;
};

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
    x = xVal;
    //round(xVal * 10) / 10;
}

void point::SetY(double yVal){
    y = yVal;
    //round(yVal * 10) / 10;
}

double point::GetX() const{
    return x;
}

double point::GetY() const{
    return y;
}