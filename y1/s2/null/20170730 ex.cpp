#include <iostream>
using namespace std;

class Rectangle {
private:
	int width;
	int length;
public:
	int area();
	void setLength(int l);
	void setWidth(int w);
};

int Rectangle::area() {
	return width * length;
}

void Rectangle::setLength(int l) {
	length = l;
}

void Rectangle::setWidth(int w) {
	width = w;
}

int main() {

	Rectangle r1, r2;

	r1.setLength(30);
	r1.setWidth(100);

	r2.setLength(20);
	r2.setWidth(50);

	int rem = r1.area() - r2.area();

	cout << rem << endl;

	return 0;
}