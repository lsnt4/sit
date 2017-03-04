#include <stdio.h>

int t4_q2();
int ls4_ex1();
int ls4_ex2();

int main(void) {

	//t4_q2();
	//ls4_ex2();
	//ls4_ex1();

	return 0;
}

int t4_q2() {

	int accNum;
	float beginningBalance, creditLimit, totalCredits, totalCharges;

	printf("Account Number: ");		scanf("%d", &accNum);
	printf("Beginning Balance: ");	scanf("%f", &beginningBalance);
	printf("Credit Limit: ");		scanf("%f", &creditLimit);
	printf("Total Credits: ");		scanf("%f", &totalCredits);
	printf("Total Charges: ");		scanf("%f", &totalCharges);

	beginningBalance = beginningBalance + totalCharges - totalCredits;

	if(beginningBalance > creditLimit) {
		printf("New balance is: %.2f\n", beginningBalance);
	}

}

int ls4_ex1() {

	int num, out;

	printf("Insert a number: ");
	scanf("%d", &num);

	out = num % 2;

	if(num != 0) {
		if(out) {
			printf("Odd\n");
		} else {
			printf("Even\n");
		}
	} else {
		printf("Zero is not allowed\n");
	}

}

int ls4_ex2() {

	char color;

	puts("Orange\nBrown\nYellow\nGreen\n");
	printf("Insert a character: ");
	scanf("%c", &color);

	if(color == 'o' || color == 'O') {
		printf("Ammonia\n");
	} else if (color == 'b' || color == 'B') {
		printf("Carbon Monoxide\n");
	} else if (color == 'y' || color == 'Y') {
		printf("Hydrogen\n");
	} else if (color == 'g' || color == 'G') {
		printf("Oxygen\n");
	} else {
		printf("Invalid character");
	}

	puts("Glad to be of service");

}






