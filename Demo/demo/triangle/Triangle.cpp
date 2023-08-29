//
// Created by Administrator on 2023/8/29.
//

#include "Triangle.h"
#include <iostream>
using namespace std;
Triangle::Triangle(const Point &p1, const Point &p2, const Point &p3): point1(p1), point2(p2), point3(p3) {
    cout <<"Triangle对象构造完毕" << endl;

}
void Triangle::show()
{
    cout << "point1\t" << point1.getX() << "," <<point1.getY() <<endl;
    cout << "point2\t" << point2.getX() << "," <<point2.getY() <<endl;
    cout << "point3\t" << point3.getX() << "," <<point3.getY() <<endl;
}


