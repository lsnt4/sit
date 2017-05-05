/**
 * Assignment:	4
 * Version:		4B
 *
 * Date:		2017-05-05 23:08:52
 */

#include <stdio.h>

float getDiscountPrice(int noOfGuests, float chargePerGuest);
float getAmount(int noOfGuests, float chargePerGuest, float discount);

int main(void) {
	int noOfGuests;
	float chargePerGuest, discount, amount;

	printf("Enter the number of guests: ");
	scanf("%d", &noOfGuests);
	printf("Charge per guest: ");
	scanf("%f", &chargePerGuest);

	discount = getDiscountPrice(noOfGuests, chargePerGuest);
	amount = getAmount(noOfGuests, chargePerGuest, discount);

	printf("Discount: %.2f\n", discount);
	printf("Amount to be paid: %.2f\n", amount);

	return 0;
}

float getDiscountPrice(int noOfGuests, float chargePerGuest) {
	float discount;
	if(noOfGuests > 200) {
		discount = noOfGuests * chargePerGuest * (10.0/100);
	} else {
		discount = 0;
	}
	return discount;
}

float getAmount(int noOfGuests, float chargePerGuest, float discount) {
	float amount;
	amount = noOfGuests * chargePerGuest - discount;
	return amount;
}