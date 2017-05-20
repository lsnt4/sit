#include <stdio.h>

int main(void) {

	int distance, vehicleType;
	float price, price25km, price50km, priceAbove50km;

	printf("What type of vehicle do you want? For non A/C, type 1 or AC type 2: ");
	scanf("%d", &vehicleType);

	printf("Distance? ");
	scanf("%d", &distance);

	switch (vehicleType) {
		case 1 :
			price25km = 25.50;
			price50km = 35.50;
			priceAbove50km = 50.00;
			break;
		case 2 :
			price25km = 30.50;
			price50km = 40.50;
			priceAbove50km = 55.00;
			break;
		default:
			printf("Invalid type\n");
			return -1;
	}

	if(distance <= 25) {
		price = (float) distance * price25km;
	} else if (distance >= 26 && distance <= 50) {
		distance -= 25;
		price = (float) distance * price50km + price25km*25;
	} else {
		distance -= 50;
		price = (float) distance * priceAbove50km + price25km*25 + price50km*25;
	}

	printf("Your total cost is: %.2f\n", price);

	return 0;

}
