#include "Rectangle.h"

void Rectangle::setLength(double l) {
	length = l;
}

void Rectangle::setWidth(double w) {
	width = w;
}

double Rectangle::calcSArea() {
	return length * length;
}

double Rectangle::calcArea() {
	return width * length;
}