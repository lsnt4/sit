#include <stdio.h>

int main(void) {

	int distance;
	float first50km, above50km, price;
	char vehicleType;

	printf("What vehicle do you want? Car (C), Van (V) or Three Wheeler (T)? ");
	scanf("%c", &vehicleType);

	printf("Distance? ");
	scanf("%d", &distance);

	if (vehicleType == 'C' || vehicleType == 'c') {
		first50km = 45.50;
		above50km = 55.00;
	} else if (vehicleType == 'V' || vehicleType == 'v') {
		first50km = 40.50;
		above50km = 50.00;
	} else if (vehicleType == 'T' || vehicleType == 't') {
		first50km = 35.50;
		above50km = 40.00;
	} else {
		printf("Invalid vehicle type\n");
		return -1;
	}


	if (distance <= 50) {
		price = distance * first50km;
	} else {
		distance -= 50;
		price = distance * above50km + first50km*50;
	}

	printf("Total price is: %.f\n", price);

	return 0;

}
