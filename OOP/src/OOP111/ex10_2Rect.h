//
// Created by Administrator on 2023/8/17.
//

#include <iostream>
class Rect{
private:

    int length;
    int width;
public:

    void setLength(int l) {
        length = l;
    }
    void setWidth(int w) {
        width = w;
    }

    int getArea(){
        return length*width;
    }
    int getPerimeter(){
        return 2*(length+width);
    }

    Rect(int len, int wid);
    ~Rect();
};

Rect::Rect(int len,int wid) :length(len),width(wid)
{
}
Rect::~Rect()
{

}