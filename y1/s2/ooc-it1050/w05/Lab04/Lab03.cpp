#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include <iostream>

using namespace std;

int main()
{
	
	//------------Area of Circle-----------------

	double cirArea;

	Circle c1 = Circle(5);
	cirArea = c1.Area();

	//-----------Area of Rectagle---------------

	double recArea1,recArea2;

	Rectangle r1 = Rectangle(2,7);
	recArea1 = r1.Area();

	Rectangle r2 = Rectangle(10,18);
	recArea2 = r2.Area();

	//-----------Area of Square-----------------

	double sqArea;

	Square s1 = Square(4);
	sqArea = s1.Area();

	//-----------Area of the garden-------------

	double gardenArea;

	gardenArea = recArea2 - (cirArea + recArea1 + sqArea);

	cout<<"Area of the garden : "<<gardenArea<<endl;

	char ch;
	cin>>ch;

	return 0;
}