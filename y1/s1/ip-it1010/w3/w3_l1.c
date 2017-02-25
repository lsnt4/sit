#include <stdio.h>

int main(void) {

	float Celsius, Fahrenheit;
	double Ctemp, Ftemp;
	Fahrenheit = 78.5;

	Celsius = (Fahrenheit - 32) * (5.0/9.0);
	printf("%f degrees Fahrenheit is %f ", Fahrenheit, Celsius);
	printf("degrees Celsius.\n");

	Ctemp = Celsius;
	Ftemp = (Ctemp * (9/5)) + 32;

	printf("%f Celsius of Fahrenheit is: %f\n", Ctemp, Ftemp);

	return 0;

}
