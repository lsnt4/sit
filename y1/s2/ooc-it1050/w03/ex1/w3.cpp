// w3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Employee.h"
#include <iostream>
using namespace std;


int main(int argc, _TCHAR* argv[])
{
	Employee emp1(10, "Nimal", 5000);
	emp1.setOtDetails(20, 100);
	emp1.setAllowance(1500);
	emp1.calcSal();
	emp1.printPaySlip();
	
	int test;
	cin >> test;
	
	return 0;
}

