#pragma once
class Employee
{
private:
	int empno;
	char name[20];
	double basicSal;
	double otHrs;
	double otRate;
	double allowance;
	double salary;
public:
	Employee(int pempno, char pname[], double pbasicSal); // Constructor
	void setOtDetails(double potHrs, double potRate);
	void setAllowance(double pallowance);
	void calcSal();
	void printPaySlip();
//	Employee(void);
	~Employee(void); // Destructor
};

