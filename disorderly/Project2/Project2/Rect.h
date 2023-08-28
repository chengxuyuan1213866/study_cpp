#pragma once
#ifndef 
#include <iostream>
using namespace std;


class Rect
{
private:
	int length;
	int width;
public:
	void setLength(int l);
	void setWidth(int w);
	int getArea();
	int getPerimeter();
};
