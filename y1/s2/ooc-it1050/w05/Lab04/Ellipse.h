#pragma once

class Ellipse {
private:
	double a;
	double b;
public:
	Ellipse(double pa, double pb);
	double Area();
	~Ellipse();
};