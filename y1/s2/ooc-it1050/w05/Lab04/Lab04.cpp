#include "Circle.h"
#include "Ellipse.h"
#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"

#include <iostream>

using namespace std;

int main() {

	int shape = 1;

	cout << "Enter the number of the shape to calculate the area " << endl;
	cout << "----------------------------------------------------" << endl;
	cout << "1. Square" << endl;
	cout << "2. Rectangle" << endl;
	cout << "3. Circle" << endl;
	cout << "4. Ellipse" << endl;
	cout << "5. Triangle" << endl;
	cout << "0. Exit" << endl;

	while ( shape != 0) {
		
		cin >> shape;
		
		switch(shape) {

		case 1:
			{
				double len, sqArea;
				cout << "Enter the length of the square: " << endl;
				cin >> len;
				Square* sq1 = new Square(len);
				sqArea = sq1->Area();
				delete sq1;
				cout << "Square Area: " << sqArea << endl;
				break;
			}
		case 2:
			{
				double h, w, recArea;
				cout << "Enter height and width of the rectangle: " << endl;
				cin >> h >> w;
				Rectangle* rec = new Rectangle(h, w);
				recArea = rec->Area();
				delete rec;
				cout << "Rectangle Area: " << recArea << endl;
				break;
			}
		case 3:
			{
				double r, cirArea;
				cout << "Enter the radius of the circle: " << endl;
				cin >> r;
				Circle* cir = new Circle(r);
				cirArea = cir->Area();
				delete cir;
				cout << "Circle Area: " << cirArea << endl;
				break;
			}
		case 4:
			{
				double a, b, ellArea;
				cout << "Enter the a and b of the ellipse: " << endl;
				cin >> a >> b;
				Ellipse * el = new Ellipse(a, b);
				ellArea = el->Area();
				delete el;
				cout << "Ellipse Area: " << ellArea << endl;
				break;
			}
		case 5:
			{
				double h, b, triArea;
				cout << "Enter the height and base of the triagle: " << endl;
				cin >> h >> b;
				Triangle* tr = new Triangle(h, b);
				triArea = tr->Area();
				delete tr;
				cout << "Triagle Area: " << triArea << endl;
				break;
			}
		case 0:
			{
				return 0;
			}
		default:
			{
				cout << "Invalid Input" << endl;
			}

		}

	}

}