#include <stdio.h>
#include <math.h>
#include <assert.h>

float t8q1();
float t8q2(float a, float b, float c);
float circleArea(float radius);
float calc(int op, float x, float y);
char grade(int marks);
int l6e2();
int factorial(int x);
int l8e1a();
int l7e1a();

int main(void) {

	/***********************************************
	l7e1a();
	***********************************************/

	/***********************************************
	l8e1a();
	***********************************************/

	/***********************************************
	factorial(5);
	***********************************************/

	/***********************************************
	l6e2();
	***********************************************/

	/***********************************************
	t8q1();
	***********************************************/

	/***********************************************
	t8q2(1, 3, 2);
	***********************************************/

	/***********************************************
	float radius;
	puts("Enter the radius of the circle");
	scanf("%f", &radius);
	printf("%f", circleArea(radius) );
	***********************************************/

	/***********************************************
	FUNC CALC
	int op;
	float x, y;

	printf("Add: 1, Sub: 2, Mul: 3, Div: 4;\n\n");
	scanf("%d", &op);
	puts("Enter the first number: ");
	scanf("%f", &x);
	puts("Enter the second number: ");
	scanf("%f", &y);
	printf("%.2f", calc(op, x, y) );
	************************************************/

	/************************************************
	printf("%c", grade(20));
	assert(1);
	************************************************/

	return 0;
}

int l7e1a() {

	int x, y, z;

	for(x = 1; x <= 10; x++) {
		for(y = 1; y < x; y++) {
			printf("*");
		}
		printf("\n");
	}
	puts("");
	for(x = 1; x <= 10; x++) {
		for(y = 10; y > x; y--) {
			printf("*");
		}
		printf("\n");
	}
	puts("");

	x=5 x>=1 x--
		y=1 y<=5-x y++
		z1 z<x z++


	for(x = 1; x <= 10; x++) {
		for(y = 1; y < 10 - x; y++) {
			printf(" ");
		}
		for(z = 10; z > 1; z--) {
			printf("*");
		}
		printf("\n");
	}
}

int l8e1a() {

	int x, y;

	for(x = 1; x <= 10; x++) {
		for(y = 1; y <= 10; y++) {
			printf("*");
		}
		printf("\n");
	}
}

int factorial(int x) {

	int factNum;
	factNum = x;

	while(factNum >= 1) {

		x = x * factNum ;
		printf("%d\n", x);
		factNum--;
	}
}

int l6e2() {
	int x = 1;
	printf("N\tN*10\tN*100\tN*1000\n");
	while (x <= 10) {
		printf("%d\t%d\t%d\t%d\n", x, x*10, x*100, x*1000);
		x++;
	}
}

char grade(int marks) {

	char grade;

	if(marks >= 0 && marks <= 39) {
		grade = 'F';
	} else if (marks >= 40 && marks <= 59 ) {
		grade = 'C';
	} else if (marks >= 60 && marks <= 74 ) {
		grade = 'B';
	} else if (marks >= 75 && marks <= 100) {
		grade = 'A';
	} else {
		grade = 'X';
	}

	return grade;
}

float calc(int op, float x, float y) {
	switch (op) {
		case 1 : return x + y; break;
		case 2 : return x - y; break;
		case 3 : return x * y; break;
		case 4 : return x / y; break;
		default: printf("Invalid operator");
	}
}

float circleArea(float radius) {
	float area;
	area = (22/7.0)*pow(radius, 2);
	return area;
}

float t8q2(float a, float b, float c) {
	float x1, x2, tmp;
	tmp = sqrt(pow(b, 2) - 4*a*c);
	x1 = (-b + tmp)/(2*a);
	x2 = (-b - tmp)/(2*a);
	printf("%.2f", x1);
	printf("%.2f", x2);
	return 0;
}

float t8q1() {
	printf("%.2f\n", floor(7.5) );
	printf("%.2f\n", ceil(0.0) );
	printf("%.2f\n", ceil(-6.4) );
	printf("%.2f\n", log10(100.0) );
	printf("%.2f\n", ceil(floor(-5.5)) );
}