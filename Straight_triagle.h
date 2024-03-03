#pragma once
#include <cmath>
#include <iostream>

class Straight_triagle
{
private:
    double _x1, _x2, _x3, _y1, _y2, _y3;
    double _a, _b, _c;
public:
    Straight_triagle(){//По умолчанию
        _x1 = 1;
        _x2 = 0;
        _x3 = 0;
        _y1 = 0;
        _y2 = 1;
        _y3 = 0;
    };

    Straight_triagle(double x1, double x2, double x3, double y1, double y2, double y3){//С параметрами
        _x1 = x1;
        _x2 = x2;
        _x3 = x3;
        _y1 = y1;
        _y2 = y2;
        _y3 = y3;
        CheckTriagle();
    };

    Straight_triagle(const Straight_triagle &tmp);//Копирование

    void CheckTriagle();

    double countArea();
    
    inline double getX1(){return _x1;};
    inline double getX2(){return _x2;};
    inline double getX3(){return _x3;};
    inline double getY1(){return _y1;};
    inline double getY2(){return _y2;};
    inline double getY3(){return _y3;};

    void setX1(double x1){_x1 = x1;};
    void setX2(double x2){_x2 = x2;};
    void setX3(double x3){_x3 = x3;};
    void setY1(double y1){_y1 = y1;};
    void setY2(double y2){_y2 = y2;};
    void setY3(double y3){_y3 = y3;};



    Straight_triagle& operator=(const Straight_triagle& tmp){//Присваивание
        _x1 = tmp._x1;
        _x2 = tmp._x2;
        _x3 = tmp._x3;
        _y1 = tmp._y1;
        _y2 = tmp._y2;
        _y3 = tmp._y3;
        return *this;
    }






    friend std::ostream& operator << (std::ostream &os, const Straight_triagle &straight_triagle){
        return os << "A = (" << straight_triagle._x1 << ";" << straight_triagle._y1 << "), B = (" << straight_triagle._x2 << ";" << straight_triagle._y2 << "), C = (" << straight_triagle._x3 << ";" << straight_triagle._y3 << ")";
    }

    friend std::istream& operator >> (std::istream& in, Straight_triagle &straight_triagle){
        double x1, x2, x3, y1, y2, y3;
        in >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        straight_triagle.setX1(x1);
        straight_triagle.setX2(x2);
        straight_triagle.setX3(x3);
        straight_triagle.setY1(y1);
        straight_triagle.setY2(y2);
        straight_triagle.setY3(y3);
        return in;
    }


    ~Straight_triagle(){}
};