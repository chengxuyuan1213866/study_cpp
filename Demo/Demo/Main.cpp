#include <iostream>
#include "Circle.h"
#include "Rectangle.h"

using namespace std;
int main()
{
	struct Circle c = { {4,5},10 };
	struct Rectangle r = { {6,8},10,20 };
	cout << "圆的面积" << area(c) << endl;
	cout << "圆的周长" << perimeter(c) << endl;
	cout << "矩形的面积" << area(r) << endl;
	cout << "矩形的周长" << perimeter(r) << endl;

	return 0;
}









