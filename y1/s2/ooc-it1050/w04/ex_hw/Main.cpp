#include <iostream>
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

int main() {

	Circle pond;
	Rectangle buildingS, buildingR, land;

	/*
	* Pond Area
	*/
	double pondArea;
	double pondRadius;
	cout << "Enter pond radius: ";
	cin >> pondRadius;
	pond.setRadius(pondRadius);
	pondArea = pond.calcArea();

	/*
	* Building (Square) Area
	*/
	double buildingSArea;
	double buildingLen;
	cout << "Enter building (square) length: ";
	cin >> buildingLen;
	buildingS.setLength(buildingLen);
	buildingSArea = buildingS.calcSArea();

	/*
	* Building (Rectangle) Area
	*/
	double buildingRArea;
	double buildingL, buildingW;
	cout << "Enter building (rectangle) length and width: ";
	cin >> buildingL >> buildingW;
	buildingR.setLength(buildingL);
	buildingR.setWidth(buildingW);
	buildingRArea = buildingR.calcArea();

	/*
	* Land Area
	*/
	double landArea;
	double landL, landW;
	cout << "Enter land length and width: ";
	cin >> landL >> landW;
	land.setLength(landL);
	land.setWidth(landW);
	landArea = land.calcArea();

	/*
	* Grass Area
	*/
	cout << "Grass Area: " << landArea - pondArea - buildingSArea - buildingRArea << endl;

	char tmp;
	cin >> tmp;
}