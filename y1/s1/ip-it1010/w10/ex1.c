#include <stdio.h>

int fact(int x);
int factorial(int number);
int power(int a, int b);

int main(void) {

	printf("%d", power(3, 4) );

	return 0;
}

int power(int a, int b) {

	if(b == 0) {
		return 1;
	} else {
		return a*power(a, b-1);
	}

}









int factorial(int number) {

	if(number <= 1) {
		return 1;
	} else {
		return (number * factorial(number - 1));
	}

}

int fact(int x) {
	int i, ans = 1;
	for(i = 1; i <= x; i++) {
		ans = ans*i;
	}
	printf("%d", ans);
}
