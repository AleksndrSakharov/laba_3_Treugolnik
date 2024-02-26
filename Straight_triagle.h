#pragma once
#include <cmath>
#include <iostream>

class Straight_triagle
{
private:
    double _x1, _x2, __x3, _y1, _y2, _y3;
    double _a, _b, _c;
public:
    Straight_triagle(double x1, double x2,  double x3, double y1, double y2, double y3){
        _a = pow(_x1-_x2, 2) + pow(y1-y2, 2);
        _b = pow(x2-x3, 2) + pow(y2-y3, 2);
        _c = pow(x1-x3, 2) + pow(y1-y3, 2);
        if (pow(_c, 2) != pow(_a, 2) + pow(_b, 2)){
            throw "NO";
        } 
    };
    
};