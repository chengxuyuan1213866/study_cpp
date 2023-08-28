#include <iostream>
#include "Rect.h"

void Rect::setLength(int l)
{
	length = l;

}
void Rect::setWidth(int w)
{
	width = w;

}
int Rect::getArea()
{
	return length * width;
}
int Rect::getPerimeter()
{
	return 2 * (length + width);
}