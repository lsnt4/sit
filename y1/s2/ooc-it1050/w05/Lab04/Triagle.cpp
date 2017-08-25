#include "Triangle.h"
#include <iostream>

using namespace std;

Triangle::Triangle( double h, double b) {
	height = h;
	base = b;
	cout << "Triangle object created" << endl;
}

double Triangle::Area() {
	return 1/2.0 * height * base;
}

Triangle::~Triangle() {
	cout << "Triangle object destroyed" << endl;
}