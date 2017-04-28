#include <stdio.h>
#include <math.h>
#include <assert.h>

double hypotenuse(double x, double y);

int main(void) {

	double s1, s2;

	printf("Side 1 value: ");
	scanf("%lf", &s1);
	printf("Side 2 value: ");
	scanf("%lf", &s2);

	printf("%.2f\n", hypotenuse(s1, s2));

	assert( hypotenuse(3.0, 4.0) == 4.0 );
	assert( hypotenuse(5.0, 12.0) == 13.0 );
	assert( hypotenuse(8.0, 15.0) == 17.0 );
}

double hypotenuse(double x, double y) {

	double hypotenuse;

	hypotenuse = sqrt( pow(x, 2) + pow(y, 2) );
	return hypotenuse;
}
