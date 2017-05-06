#include <stdio.h>

int main(void) {

	int a[] = {10, 20, 30, 40, 50};
	int b[] = {34, 67, 12, 89, 12};
	int c[5];

	int x;
	for(x = 0; x < 5; x++) {
		c[x] = a[x] * b[x];
	}

	for(x = 0; x < 5; x++) {
		printf("%d\n", c[x]);
	}

	return 0;

}
