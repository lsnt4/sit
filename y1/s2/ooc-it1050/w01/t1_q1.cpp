#include <iostream>
using namespace std;

int main() {

	double mm;

	cout << "Length in millimeters: ";
	cin >> mm;
	cout << mm * (1 / 25.4) << endl;

	return 0;
}