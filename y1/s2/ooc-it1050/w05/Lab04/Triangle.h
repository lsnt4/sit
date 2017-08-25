#pragma once

class Triangle {
private:
	double height;
	double base;
public:
	Triangle(double h, double b);
	double Area();
	~Triangle();
};