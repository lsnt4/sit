// Ex3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int num1, num2;
	char op;
	int ans;

	cout << "First number: ";
	cin >> num1;
	cout << "Second number: ";
	cin >> num2;
	cout << "Operator: ";
	cin >> op;

/*
	if(op == '+') {
		ans = num1 + num2;
	} else if (op == '-') {
		ans = num1 - num2;
	} else if (op == '*') {
		ans = num1 * num2;
	} else if (op == '/') {
		ans = num1 / num2;
	} else {
		cout << "Invalid operator\n";
	}
*/


/*
	switch(op) {
	case '+':
		ans = num1 + num2;
		break;
	case '-':
		ans = num1 - num2;
		break;
	case '*':
		ans = num1 * num2;
		break;
	case '/':
		ans = num1 / num2;
		break;
	default:
		cout << "Invalid operator\n";
	}
*/



	cout << "Answer: " << ans << endl;
	cin >> op;
	return 0;
}

