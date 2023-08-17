//
// Created by Administrator on 2023/8/17.
//
#include "Rect.h"
#include <iostream>
using namespace std;
int main()
{
    Rect c1,c2;
    c1.setLength(200);
    c1.setWidth(100);
    c2.setLength(20);
    c2.setWidth(10);
    cout << "矩形1的面积" << c1.getArea() << endl;
    cout << "矩形1的周长" << c1.getPerimeter() << endl;
    cout << "矩形2的面积" << c2.getArea() << endl;
    cout << "矩形2的周长" << c2.getPerimeter() << endl;

    return 0;
}