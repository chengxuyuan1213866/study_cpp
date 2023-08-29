//
// Created by Administrator on 2023/8/28.
//

#ifndef CPP_CIRCLE_H
#define CPP_CIRCLE_H

#include "Point.h"
class Circle {
private:
    const double PI;
    Point center;
    double radius;
public:
    Circle(const Point &p,double r);
    Circle(const Circle &c);
    void show();
};


#endif //CPP_CIRCLE_H
