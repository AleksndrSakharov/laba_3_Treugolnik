#include "Straight_triagle.h"

void Straight_triagle::CheckTriagle(){
    _a = pow(_x1-_x2, 2) + pow(_y1-_y2, 2);
    _b = pow(_x2-_x3, 2) + pow(_y2-_y3, 2);
    _c = pow(_x1-_x3, 2) + pow(_y1-_y3, 2);
    if ((_c == _b && _a == _b) || _c == 0 || _a == 0 || _b == 0) throw "This is not a straight triagle";
    if ((_b == _a + _c) || (_a == _c + _b) || (_c == _a + _b)){
        std::cout << "This is a straight triagle" << std::endl;
    }
    else throw "This is not a straight triagle";
}

double Straight_triagle::countArea(){
    Straight_triagle::CheckTriagle();
    if (_c > _a && _c > _b) return pow(_a * _b, 0.5) / 2;
    if (_b > _a && _b > _c) return pow(_a * _c, 0.5) / 2;
    if (_a > _c && _a > _b) return pow(_c * _b, 0.5) / 2;
}

Straight_triagle::Straight_triagle(const Straight_triagle &tmp){//Копирование
    _x1 = tmp._x1;
    _x2 = tmp._x2;
    _x3 = tmp._x3;
    _y1 = tmp._y1;
    _y2 = tmp._y2;
    _y3 = tmp._y3;
}