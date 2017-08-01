// Ex2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int num;
	cout << "Enter a number: ";
	cin >> num;

	if (num > 0) {
		cout << "Positive\n";
	} else if (num == 0) {
		cout << "Zero\n";
	} else {
		cout << "Negative\n";
	}
	cin >> num;
	return 0;
}

