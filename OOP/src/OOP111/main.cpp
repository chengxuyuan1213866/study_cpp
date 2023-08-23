//
// Created by Administrator on 2023/8/17.
//
#include <iostream>
#include "ex10_2Rect.h"
using namespace std;
int main()
{
/*    Rect c1,c2;
    c1.setLength(200);
    c1.setWidth(100);
    c2.setLength(20);
    c2.setWidth(10);
    // c1.length = 20;
*//*    cout << "矩形1的面积" << c1.getArea() << endl;
    cout << "矩形1的周长" << c1.getPerimeter() << endl;
    cout << "矩形2的面积" << c2.getArea() << endl;
    cout << "矩形2的周长" << c2.getPerimeter() << endl;
    cout<< " 你好 " << endl;*//*
    cout<< sizeof c1 << endl;
    cout << sizeof c2 << endl;
    cout << "c1的地址" << &c1 << endl;
    cout << "c2的地址" << &c2 << endl;
    cout << "c2+1的地址" << &c2+1 << endl;
    cout << "c2+2的地址" << &c2+2 << endl;
    cout << "c2+3的地址" << &c2+3 << endl;*/

    Rect c1(10,20);
    cout<< "矩形的周长是" << c1.getPerimeter()<< endl;
    cout<< "矩形的面积是" << c1.getArea()<< endl;


    return 0;
}