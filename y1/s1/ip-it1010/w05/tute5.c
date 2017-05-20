#include <stdio.h>

int main(void) {

	//ex1();
	//ex2();
	//ex3();
	//ex4();
	//ex5();
	//ex6();
	//ex7();

	return 0;

}

int ex1() {

  	int i = 1, j = 2, k = 3, m = 2;

	printf("%d\n", i == 1);
	printf("%d\n", j == 3);
	printf("%d\n", i >= 1 && j < 4);
	printf("%d\n", m <= 99 && k < m);
	printf("%d\n", j >= 1 || k == m);
	printf("%d\n", k + m < j || 3 - j >=  k);
	printf("%d\n", !m);
	printf("%d\n", !(j - m));
	printf("%d\n", !(k > m) );
	printf("%d\n", !(j > k) );

	return 0;

}

int ex2() {

	int a, b, c;
	int sum, product, min, max;
	float average;

	printf("Enter number 1: ");
	scanf("%d", &a);	
	printf("Enter number 2: ");
	scanf("%d", &b);
	printf("Enter number 3: ");
	scanf("%d", &c);

	sum = a + b + c;
	product = a*b*c;
	average = (float)  sum / 3;

	if(a < b) {
		min = a;
	} else {
		min = b;
	}

	if(min < c) {
		min = min;
	} else {
		min = c;
	}

	
	if(a > b) {
		max = a;
	} else {
		max = b;
	}

	if(max > c) {
		max = max;
	} else {
		max = c;
	}

	printf("Sum: %d\n", sum);
	printf("Product: %d\n", product);
	printf("Average: %f\n", average);
	printf("Min: %d\n", min);
	printf("Max: %d\n", max);

	return 0;
}


int ex3() {

	int year;

	printf("Enter an year: ");
	scanf("%d", &year);


	if((year%4==0) && (year%400==0) && (year%100!=0)) {
		printf("Leap year\n");
	} else {
		printf("Not a leap year\n");
	}

	return 0;
}

int ex4() {

	char grade;

	printf("Enter grade: ");
	scanf("%c", &grade);

	if(grade == 'A' || grade == 'a') {
		printf("Excellent\n");
	} else if (grade == 'B') {
		printf("Best\n");
	} else if (grade == 'C') {
		printf("Good\n");
	} else {
		printf("OK\n");
	}
	
	return 0;	
}

int ex5() {

	int no1, no2, ans;
	char op;


	printf("Enter operator: ");
	scanf("%c", &op);
	printf("Enter number 1: ");
	scanf("%d", &no1);
	printf("Enter number 2: ");
	scanf("%d", &no2);

	puts("");

	switch (op) {

		case '+' : ans = no1 + no2; break;
		case '-' : ans = no1 - no2; break;
		case '/' : ans = no1 / no2; break;
		case '*' : ans = no1 * no2; break;
		default  : printf("Invalid operator\n");return -1;
	}

	printf("Answer: %d\n", ans);

	return 0;

}


int ex6() {

	int prodid, prodqty;
	float prodval, total;

	printf("Enter the product number: ");
	scanf("%d", &prodid);

	printf("Enter quantity: ");
	scanf("%d", &prodqty);

	switch (prodid) {
		case 1  : prodval = 2.98; break;
		case 2  : prodval = 4.50; break;
		case 3  : prodval = 9.98; break;
		case 4  : prodval = 4.49; break;
		case 5  : prodval = 6.87; break;
		default : printf("Invalid product\n");
	}

	total = prodval * (float) prodqty;

	printf("Total: %.2f\n", total);

	return 0;

}

int ex7() {

	int side, base;
	float area, height, radius;
	char shape;

	printf("Enter the shape: ");
	scanf("%c", &shape);

	if(shape == 's') {
		printf("Enter side value: ");
		scanf("%d", &side);
		area = side * 2;
	} else if (shape == 't') {
		printf("Enter base value: ");
		scanf("%d", &base);
		printf("Enter height: ");
		scanf("%f", &height);
		area = base * height / 2;
	} else if (shape == 'c') {
		area
	} else {
		printf("Invalid shape\n");
		return -1;
	}

	printf("Area: %.2f\n", area);

	return 0;

}

