#pragma once
#include "Point.h"

struct Rectangle
{
	struct Point center;
	double length;
	double width;
};
double area(struct Rectangle c);
double perimeter(struct Rectangle c);






