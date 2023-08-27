
#include "Rectangle.h"

double area(struct Rectangle r)
{
	return r.length * r.width;
}
double perimeter(struct Rectangle r)
{
	return 2 * (r.length + r.width);
}
