#include <stdio.h>

int main(void) {

	int noRooms, noNights;
	float unitPrice, totalPrice;
	char payMeth, roomType, termStatus = 'y';

	while ((termStatus != 'n' || termStatus != 'N') && (termStatus == 'y' || termStatus == 'Y')) {
		printf("\nEnter room type: ");
		scanf(" %c", &roomType);
		printf("Number of rooms: ");
		scanf("%d", &noRooms);
		printf("Number of nights: ");
		scanf("%d", &noNights);
		printf("Paying method (C/M): ");
		scanf(" %c", &payMeth);

		if(roomType == 'D') {
			unitPrice = 31000.00;
		} else if (roomType == 'S') {
			unitPrice = 35000.00;
		} else if (roomType == 'C') {
			unitPrice = 50000.00;
		} else if (roomType == 'E') {
			unitPrice = 75000.00;
		} else if (roomType == 'P') {
			unitPrice = 100000.00;
		} else {
			printf("Invalid Room Type\n"); return -1;
		}

		if(payMeth == 'C') {
			totalPrice = unitPrice * noRooms * noNights;
			totalPrice = totalPrice - totalPrice * (10/100.00);
		} else {
			totalPrice = unitPrice * noRooms * noNights;
		}

		printf("Your total amount: %.2f\n", totalPrice);

		printf("Do you want to continue? (Y/N): ");
		scanf(" %c", &termStatus);
	}

	return 0;
}
