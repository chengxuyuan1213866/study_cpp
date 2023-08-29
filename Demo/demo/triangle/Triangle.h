//
// Created by Administrator on 2023/8/29.
//

#ifndef DEMO_TRIANGLE_H
#define DEMO_TRIANGLE_H
#include "Point.h"

class Triangle {
private:
    Point point1;
    Point point2;
    Point point3;
public:
    Triangle(const Point &p1,const Point &p2,const Point &p3);
    void show();

};


#endif //DEMO_TRIANGLE_H
