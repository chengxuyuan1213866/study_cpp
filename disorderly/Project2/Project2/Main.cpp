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
	cout << "����1�����" << r1.getArea() << endl;
	cout << "����1���ܳ�" << r1.getPerimeter() << endl;
	cout << "����2�����" << r2.getArea() << endl;
	cout << "����2���ܳ�" << r2.getPerimeter() << endl;

	return 0;
}























