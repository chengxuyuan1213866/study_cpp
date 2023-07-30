#include <iostream>
using namespace std;
#include "Rect.h"


int main()
{
	Rect r1, r2;
	r1.setLength(200);
	r1.setWidth(100);
	r2.setLength(20);
	r2.setWidth(10);
	cout << "矩形1的面积" << r1.getArea() << endl;
	cout << "矩形1的周长" << r1.getPerimeter() << endl;
	cout << "矩形2的面积" << r2.getArea() << endl;
	cout << "矩形2的周长" << r2.getPerimeter() << endl;

	return 0;
}























