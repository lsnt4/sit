#include <stdio.h>

int q1();
int q2();

int main() {

	//q1();
	//q2();
	return 0;
}

int q1() {

	float radius, diameter, circumference, area;

	printf("Please enter the radius of circle: ");
	scanf("%f", &radius);
	printf("\n");

	diameter = 2 * radius;
	circumference = 2 * (22/7) * radius;
	area = (22/7) * radius * radius;

	printf("Diameter is: %.3f \n", diameter);
	printf("Circumference is: %.3f\n", circumference);
	printf("Area is: %.3f\n", area);
}

int q2() {

	int num, factor, temp;

	printf("Please insert a 5 digit number\n");
	scanf("%d", &num);

	if (num >= 10000 && num <= 99999) {

		factor = 1;
		temp = num;

		while(temp) {
			temp /= 10;
			factor *= 10;
		}

		while(factor > 1) {
			factor /= 10;
			printf("%d ", num/factor);
			num = num % factor;
		}

	} else {
		printf("It was not a 5 digit number\n");
	}
}











