#include "Circle.h"

Circle::Circle(double r)
{
	rad = r;
}

double Circle::Area()
{
	double area;
	area = 22/7.0*rad*rad;
	return area;
}





