#include <iostream>
#include "Circle.h"

void Circle::setRadius(double r) {
	radius = r;
}

double Circle::calcArea() {
	return 22/7 * radius * radius;
}