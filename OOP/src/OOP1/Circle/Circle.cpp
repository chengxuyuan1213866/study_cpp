//
// Created by Administrator on 2023/8/22.
//

#include <iostream>
using namespace std;
#define PI 3.1415926535

class Circle{
private:
    double radius;
public:
    double getRadius() const {
        return radius;
    }

    void setRadius(double r = 10.0);
    double getArea()
    {
        return PI*radius*radius;
    }
};
inline void Circle::setRadius(double r)
{
    radius = r;
}
/*
int main()
{
    Circle c1;
    c1.setRadius(5.0);
    cout << "圆的面积是" <<c1.getArea() << endl;
    return 0;
}
*/





