//
// Created by Administrator on 2023/8/28.
//

#include "Point.h"
Point::Point(int x1, int y1) {
    x = x1;
    y = y1;
}
Point::Point(const Point &p) {
    x = p.x;
    y = p.y;
}
int Point::getY() {
    return y;
}
int Point::getX() {
    return x;
}





