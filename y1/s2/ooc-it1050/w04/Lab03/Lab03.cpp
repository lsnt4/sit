#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include <iostream>
using namespace std;

int main() {

	//---------------- Area of Pond ------------
	double pondArea;
	Circle pond = Circle(5);
	pondArea = pond.Area();

	//---------------- Area of Building ---------
	double buildingArea;
	Rectangle r1 = Rectangle(2,7);
	buildingArea = r1.Area();

	//---------------- Area of Square Bldn ------
	double sqrBldnArea;
	Square s = Square(4);
	sqrBldnArea = s.Area();

	//---------------- Area of garden ------------
	double yrdArea;
	Rectangle r2 = Rectangle(10, 18);
	yrdArea = r2.Area();

	cout << "Area of grass is: " << yrdArea - pondArea - buildingArea - sqrBldnArea;

	char ch;
	cin >> ch;
	return 0;
	
}