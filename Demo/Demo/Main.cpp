#include <iostream>
#include "Circle.h"
#include "Rectangle.h"

using namespace std;
int main()
{
	struct Circle c = { {4,5},10 };
	struct Rectangle r = { {6,8},10,20 };
	cout << "Բ�����" << area(c) << endl;
	cout << "Բ���ܳ�" << perimeter(c) << endl;
	cout << "���ε����" << area(r) << endl;
	cout << "���ε��ܳ�" << perimeter(r) << endl;

	return 0;
}









