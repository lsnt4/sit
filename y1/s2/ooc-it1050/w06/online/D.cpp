#include <iostream>
using namespace std;

class Employee {
private:
	int empID;
	float empBasicSal;
	float empAllowance;
public:
	Employee(int ID, float salary);
	void calcAllowance(int hours, float rate);
	float calcGrossSalary();
	void print();
};

Employee::Employee(int ID, float salary) {
	empID = ID;
	empBasicSal = salary;
}

void Employee::calcAllowance(int hours, float rate) {
	empAllowance = hours * rate;
}

float Employee::calcGrossSalary() {
	return empBasicSal + empAllowance;
}

void Employee::print() {
	cout << "Employee ID: " << empID << endl;
	cout << "Basic Salary: " << empBasicSal << endl;
	cout << "Allowance: " << empAllowance << endl;
	cout << "Gross Salary: " << this->calcGrossSalary() << endl;
}

int main() {
	Employee emp(51545, 100000.00);
	emp.calcAllowance(10, 150.00);
	emp.print();

/*
	Employee* emp = new Employee(51545, 100000.00);
	emp->calcAllowance(10, 150.00);
	emp->print();
*/
	return 0;
}