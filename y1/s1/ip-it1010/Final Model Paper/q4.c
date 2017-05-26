#include <stdio.h>

float calculateIncrement(int grade, float basicSalary);
float calcTotSalary(float salary, float increment);

int main(void) {

	int grade;
	float basicSalary, salary, increment;

	printf("Enter Salary: "); scanf("%f", &basicSalary);
	printf("Enter grade: "); scanf("%d", &grade);

	increment = calculateIncrement(grade, basicSalary);
	printf("Increment: %.2f\n", increment);
	printf("Total Salary: %.2f\n", calcTotSalary(basicSalary, increment));

	return 0;
}

float calculateIncrement(int grade, float basicSalary) {
	switch (grade) {
		case 1 : return basicSalary * 10/100.00; break;
		case 2 : return basicSalary * 15/100.00; break;
		case 3 : return basicSalary * 20/100.00; break;
		default: return 0;
	}
}

float calcTotSalary(float salary, float increment) {
	return salary + increment;
}