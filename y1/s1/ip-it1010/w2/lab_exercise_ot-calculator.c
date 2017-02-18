#include <stdio.h>

int main() {
	float otamount, hours, total;

	printf("Enter OT rate per hour: ");
	scanf("%f", &otamount);

	printf("Enter hours worked: ");
	scanf("%f", &hours);

	total = otamount * hours;

	printf("Total = %.2f\n", total);

	return 0;
}