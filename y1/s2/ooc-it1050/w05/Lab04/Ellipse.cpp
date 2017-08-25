#include "Ellipse.h"
#include <iostream>
using namespace std;

Ellipse::Ellipse( double pa, double pb) {
	a = pa;
	b = pb;
	cout << "Ellipse object created" << endl;
}

double Ellipse::Area() {
	return 22/7.0 * a * b;
}

Ellipse::~Ellipse() {
	cout << "Ellipse object destroyed" << endl;
}

