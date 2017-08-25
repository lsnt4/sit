#include "Rectangle.h"

Rectangle::Rectangle(double hei, double wid)
{
	height = hei;
	width = wid;
}

double Rectangle::Area(void)
{
	return (height*width);
}
