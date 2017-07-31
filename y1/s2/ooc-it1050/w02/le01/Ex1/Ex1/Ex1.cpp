// Ex1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int m1, m2, m3;
	double avg;

	cout << "No 1: ";
	cin >> m1;
	cout << "No 2: ";
	cin >> m2;
	cout << "No 3: ";
	cin >> m3;

	avg = (m1 + m2 + m3) / 3.0;

	cout << "Average: " << avg << endl;

	cin >> m3;
	return 0;
}

