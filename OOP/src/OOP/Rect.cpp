//
// Created by Administrator on 2023/8/17.
//

#include "Rect.h"
#include <iostream>
using namespace std;




void Rect::setLength(int l) {
    length = l;
}
void Rect::setWidth(int w) {
    width = w;
}
int Rect::getArea() {
    return length*width;
}
int Rect::getPerimeter() {
    return 2*(length+width);
}









