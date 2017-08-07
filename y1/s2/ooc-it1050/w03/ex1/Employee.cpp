#include "StdAfx.h"
#include "Employee.h"
#include <iostream>
#include <cstring>
using namespace std;


Employee::Employee(int pempno, char pname[], double pbasicSal)
{
	empno = pempno;
	strcpy(name, pname);
	basicSal = pbasicSal;
}

void Employee::setOtDetails(double potHrs, double potRate) {
	otHrs = potHrs;
	otRate = potRate;
}

void Employee::setAllowance(double pallowance) {
	allowance = pallowance;
}

void Employee::calcSal(){
	salary = basicSal + otHrs * otRate + allowance;
}

void Employee::printPaySlip() {
	cout << "-----------------------------" << endl;
	cout << "Emp No:\t" << empno << endl << endl ;
	cout << "Name:\t" << name << endl << endl;
	cout << "Basic Salary:\t" << basicSal << endl;
	cout << "OT hours:\t" << otHrs << endl;
	cout << "OT rate:\t" << otRate << endl;
	cout << "Allowance:\t" << allowance << endl;
	cout << "Gross Salary:\t" << salary << endl;
	cout << "-----------------------------" << endl;
}

Employee::~Employee(void)
{
}
