//
// Created by Administrator on 2023/8/28.
//

#include "Circle.h"
#include <iostream>
using  namespace  std;

Circle::Circle(const Point &p, double r):PI(3.14159), center(p)
{
    radius = r;
}
Circle::Circle(const Circle &c) :PI(c.PI){
    center= c.center;
    radius =c.radius;
}
void Circle::show() {
    cout<< "center:(" << center.getX() <<"," << center.getY() <<")\n";
    cout << "radius" << "\t" << radius << endl;
}






