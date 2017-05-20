#include <stdio.h>

int main(void) {
	
	int position, salary, sales, commission;
	float totalSalary, totalCommission;

	printf("Enter the position: ");
	scanf("%d", &position);
	printf("Enter number of sales: ");
	scanf("%d", &sales);

	if(sales < 3000) {
		commission = 0;
	} else if (sales >= 3000 && sales <= 3999) {
		commission = 12;
	} else {
		commission = 15;
	}

	switch (position) {
		case 1 : salary = 50000; break;
		case 2 : salary = 75000; break;
		default: printf("Invalid position\n"); return -1;
	}

	totalCommission = (float) salary * commission / 100;

	totalSalary = salary + totalCommission;

	printf("Total commission: %.2f\n", totalCommission);
	printf("Total salary: %.2f\n", totalSalary);

	return 0;

}
