#include <stdio.h>
#include <math.h>

float circleArea(float radius);

void chart(float f);
float ex2_celsius(float f);
float ex2_fahrenheit(float c);
int ex1_multiple(int x, int y);

int main(void) {

	circleArea(23);

	//chart(ex2_celsius(212));
	//printf("%.2f", ex2_celsius(212));
	//printf("%.2f", ex2_fahrenheit(160));
	//printf("%d", ex1_multiple(144, 12));	

	return 0;
}

float circleArea(float r) {

	float a;
	a = (22/7.0) * pow(r, 2);
	printf("%.2f", a);

}

void chart(float f) {
	// 32 => 0.00
	// 45 => 7.22
	int x;
	printf("Celsius\tFahrenheit\n");
	for(x = 0; x <= 100; x++) {
		printf("%d\t%.2f\n", x, ex2_fahrenheit(x));
	}
}

float ex2_celsius(float f) {
	float c;
	c = (f - 32) * (5/9.0);
	return c;
}

float ex2_fahrenheit(float c) {
	float f;
	f = (c * (9/5.0) ) + 32;
	return f;
}

int ex1_multiple(int x, int y) {
	if( x%y ) {
		return 0;
	} else {
		return 1;
	}
}
