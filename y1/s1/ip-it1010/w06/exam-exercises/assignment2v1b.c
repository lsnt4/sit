#include <stdio.h>

int main(void) {
	int courseNumber, courseFee;
	float marks, discount, totalDiscount, totalCourseFee;

	printf("Course No: ");
	scanf("%d", &courseNumber);

	printf("Marks: ");
	scanf("%f", &marks);

	if (marks >= 80 && marks <= 100) {
		discount = 7.5;
	} else if (marks >= 65 && marks <= 79) {
		discount = 5.0;
	} else {
		discount = 0.0;
	}

	switch (courseNumber) {
		case 1 : courseFee = 150000; break;
		case 2 : courseFee = 175000; break;
		default: printf("Invalid course\n"); return -1;
	}

	totalDiscount = (float) courseFee * discount / 100;
	totalCourseFee = courseFee - totalDiscount;

	printf("Total discount: %.2f\n", totalDiscount);
	printf("Total course fee: %.2f\n", totalCourseFee);

	return 0;
}







