#include <stdio.h>

int main() {

	const double MT = 35273.92;
	double WBounces, WBmetric;
	int noOfBoxes;

	printf("Input weight of a box in Ounces: ");
	scanf("%lf", &WBounces);

	WBmetric = WBounces / MT;
	noOfBoxes = 1 / WBmetric;

	printf("The Box weight in MT: %.2f\n", WBmetric);
	printf("The number of Boxes needed: %d\n", noOfBoxes);

	return 0;

}
