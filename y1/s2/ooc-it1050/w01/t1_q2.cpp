#include <iostream>
using namespace std;

int main() {

	int num;

	cout << "Insert a number: ";
	cin >> num;

	if(num % 2 == 0) {
		cout << "Number is Even" << endl;
	} else {
		cout << "Number is Odd\n";
	}

	return 0;
}