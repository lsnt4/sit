#include <iostream>
using namespace std;

int main() {

	int n, num;
	int n_temp = 0;
	double total;
	string suffix;

	cout << "How many numbers to calculate? ";
	cin >> n;

	while (n > n_temp) {

		n_temp++;

		if (n_temp == 11) {
			suffix = "th";
		} else if (n_temp == 12) {
			suffix = "th";
		} else if (n_temp == 13) {
			suffix = "th";
		} else if (n_temp % 10 == 1) {
			suffix = "st";
		} else if (n_temp % 10 == 2) {
			suffix = "nd";
		} else if (n_temp % 10 == 3) {
			suffix = "rd";
		} else {
			suffix = "th";
		}

		cout << "Enter the " << n_temp << suffix << " number: ";
		cin >> num;
		total = num + total;

	}

	cout << "The average of " << n_temp << " numbers is " << total / n_temp << endl;

	return 0;
}