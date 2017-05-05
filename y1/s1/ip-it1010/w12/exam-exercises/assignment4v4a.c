/**
 * Assignment:	4
 * Version:		4A
 *
 * Date:		2017-05-05 22:27:56
 */

#include <stdio.h>

float calcIncrement(float salary, int noofYearsWorked);
float calcTotSalary(float salary, float increment);

int main(void) {

	float salary, workedYears, totInc, totSal;

	printf("Enter Salary: ");
	scanf("%f", &salary);
	printf("Enter no of years worked: ");
	scanf("%f", &workedYears);
	totInc = calcIncrement(salary, workedYears);
	totSal = calcTotSalary(salary, totInc);
	printf("Increment: %.2f\n", totInc);
	printf("Total Salary: %.2f\n", totSal);

	return 0;
}

float calcIncrement(float salary, int noofYearsWorked) {
	float totIncrement;

	if (noofYearsWorked > 2) {
		totIncrement = salary * (10/100.0) * noofYearsWorked;
	} else {
		totIncrement = 0;
	}

	return totIncrement;
}

float calcTotSalary(float salary, float increment) {
	float totSalary;

	totSalary = salary + increment;

	return totSalary;
}
