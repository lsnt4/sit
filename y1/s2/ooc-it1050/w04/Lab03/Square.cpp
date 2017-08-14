#include "Square.h"

Square::Square(double l) {
	length = l;
}

double Square::Area() {
	double area;
	area = length * length;
	return area;
}