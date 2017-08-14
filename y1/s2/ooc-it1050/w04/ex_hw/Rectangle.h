#pragma once

class Rectangle {
private:
	double width;
	double length;
public:
	void setWidth(double w);
	void setLength(double l);
	double calcSArea();
	double calcArea();
};