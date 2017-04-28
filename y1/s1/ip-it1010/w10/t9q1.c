#include <stdio.h>

float calculateCharges(float hours);

int main(void) {

	int x = 1;
	float hours, totalPrice, c1p, c2p, c3p, h1, h2, h3;

	printf("Enter the parked hours: ");
	scanf("%f", &hours);
	printf("Car\tHours\tCharge\n");
	c1p = calculateCharges(hours);
	h1 = hours;
	printf("%d\t%.2f\t$%.2f\n", x, hours, c1p);

	x++;
	printf("Enter the parked hours: ");
        scanf("%f", &hours);
        printf("Car\tHours\tCharge\n");
	c2p = calculateCharges(hours);
	h2 = hours;
        printf("%d\t%.2f\t$%.2f\n", x, hours, c2p);

	x++;
        printf("Enter the parked hours: ");
        scanf("%f", &hours);
        printf("Car\tHours\tCharge\n");
	c3p = calculateCharges(hours);
	h3 = hours;
        printf("%d\t%.2f\t$%.2f\n", x, hours, c3p);

	printf("Tot\t%.2f\t%.2f\n", h1 + h2 + h3, c1p + c2p + c3p);

	return 0;

}


float calculateCharges(float hours) {

	float price;

	if(hours <= 3) {
		price = 2.0;
	} else if (hours >= 24) {
		price = 10;
	} else {
		price = 2.0 + (hours - 3) * 0.5;
	}

	return price;
}
