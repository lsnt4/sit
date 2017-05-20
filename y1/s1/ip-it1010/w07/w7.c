#include <stdio.h>

int ex1();
int ex2();
int ex3();
int ex4();
int ex5();
int ex6();
int ex7();
int ex8();
int t6q4();
int t7q1();

int main(void) {

	t7q1();
	return 0;

}

int t7q1() {

	int x = 0;
	float d;
	while(x <= 11) {

		if(x%2 == 1) {

			d = 4/x;

		}
		x++;

	}


}


int t6q4() {

	int days;
	float rate, interest, principal;

	printf("Enter loan principal (-1 to end): ");
	scanf("%f", &principal);
	
	while (principal != -1) {

		printf("Enter interest rate: ");
		scanf("%f", &rate);
		printf("Enter term of the loan in days: ");
		scanf("%d", &days);
		interest = principal * rate * days / 365;
		printf("The interest charge is: %.2f\n\n", interest);

		printf("Enter loan principal (-1 to end); ");
		scanf("%f", &principal);

	}


}


int ex8() {

	int x, y;

	for(x = 1; x <= 5; x++) {

		for(y = 1; y <= x; y++) {
			printf("*");
		}
		printf("\n");
	}
}



int ex7() {

	int x, y;

	for(x = 1; x <= 5; x++) {

		for(y = 1; y <= 5; y++) {
			printf("%d", y);
		}
		printf("\n");
	}
}



// Nested Iteration
int ex6() {

	int x, y;

	for(x = 1; x <= 5; x++) {
		for(y = 1; y <= 5; y++) {
			printf("*");
		}
		printf("\n");
	}
}



// Break/Continue Statements
int ex5() {

	int x = 1;

	while (x < 10) {

		x++;
		if(x%2 == 0) { continue; }
		printf("%d\n", x);

	}
}


// Do While Loops
int ex4() {
	
	int x = 1;

	do {

		printf("%d", x);
		x++;

	} while (x <= 10);

}

// While Loops
int ex3() {

	int x = 1;

	while (x <= 10) {
	
		printf("%d", x);
		x++;

	}

}



int ex2() {

	printf("LOADING...\n");

	int x;
	for(x = 0; x < 1000000000; x++);

	printf("LOADED!\n");

	return 0;
}


int ex1() {
	
	int x;	

	for(x = 3; x <= 23; x=x+5) {
		printf("%d ", x);
	}

}
