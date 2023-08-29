//
// Created by Administrator on 2023/8/28.
//

#ifndef CPP_POINT_H
#define CPP_POINT_H


class Point {
private:
    int x;
    int y;
public:
    Point(int x1 = 0, int y1 = 0);
    Point(const Point &p);
    int getX();
    int getY();
};


#endif //CPP_POINT_H
