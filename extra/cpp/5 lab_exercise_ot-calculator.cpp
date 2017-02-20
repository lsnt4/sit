#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	float otamount, hours, total;

	cout << "Enter OT rate per hour:\t";
	cin >> otamount;

	cout << "Enter hours worked:\t";
	cin >> hours;

	total = otamount * hours;

	cout << "Total = " << total << endl;

	return 0;
}
