/**
 * Assignment:	4
 * Version:		4C
 *
 * Date:		2017-05-05 22:49:42
 */

#include <stdio.h>

float calculateWeeklySalary(int grade, float hrsWorked);
void printDetails(int grade, float hrsWorked, float salary);

int main(void) {
	float grade, noofHoursWorked, salary;

	printf("Enter the grade: ");
	scanf("%f", &grade);
	printf("Enter the total number of hours worked: ");
	scanf("%f", &noofHoursWorked);

	salary = calculateWeeklySalary(grade, noofHoursWorked);
	printDetails(grade, noofHoursWorked, salary);

	return 0;
}

float calculateWeeklySalary(int grade, float hrsWorked) {
	float totSalary;

	switch (grade) {
		case 1 : totSalary = 100.0 * hrsWorked; break;
		case 2 : totSalary = 200.0 * hrsWorked; break;
		case 3 : totSalary = 300.0 * hrsWorked; break;
		default: ;
	}

	return totSalary;
}

void printDetails(int grade, float hrsWorked, float salary) {
	printf("\nGrade: %d\n", grade);
	printf("Worked Hours: %.2f\n", hrsWorked);
	printf("Weekly Salary: %.2f\n", salary);
}