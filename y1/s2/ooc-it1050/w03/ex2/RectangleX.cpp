#include "StdAfx.h"
#include "RectangleX.h"
#include <iostream>
using namespace std;

RectangleX::RectangleX(void)
{ 
}

void RectangleX::setLength(int pL) {
	length = pL;
}

void RectangleX::setWidth(int pW) {
	width = pW;
}

int RectangleX::area() {
	return length * width;
}

RectangleX::~RectangleX(void)
{
}
