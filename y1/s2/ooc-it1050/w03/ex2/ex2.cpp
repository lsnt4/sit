// ex2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "RectangleX.h"
#include <iostream>
using namespace std;

int main(int argc, _TCHAR* argv[])
{
	int l = 0;
	int w = 0;
	int a;

	RectangleX r1, r2;

	while(l != -1 || w != -1) {
		cout << "Enter R1 length & width: ";
		cin >> l >> w;
		r1.setLength(l);
		r1.setWidth(w);
		cout << "Area: " << r1.area() << endl;

		cout << "Enter R2 length & width: ";
		cin >> l >> w;
		r2.setLength(l);
		r2.setWidth(w);
		cout << "Area: " << r2.area();

		cout << endl;

		cout << "Final area: " << r1.area() - r2.area();
	}

	int j;
	cin >> j;

	return 0;
}

