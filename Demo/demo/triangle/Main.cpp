//
// Created by Administrator on 2023/8/29.
//

#include <iostream>
#include "Point.h"
#include "Triangle.h"

using namespace std;
int main()
{
    Point p1(20,30);
    Point p2(30,40);
    Point p3(40,50);
    Triangle t(p1,p2,p3);
    t.show();
    return 0;
}







