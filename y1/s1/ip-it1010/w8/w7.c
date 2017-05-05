#include <stdio.h>

int printSquare();
int sum();
int max();

int main(void) {

	int x, y, z;

	printf("Enter no 1: ");
	scanf("%d", &x);
	printf("Enter no 2: ");
	scanf("%d", &y);
	printf("Enter no 3: ");
	scanf("%d", &z);

	printf("Maximum value is: %d\n", max(x, y, x) );

	return 0;
}


int max(int x, int y, int z) {

	int max;

	if (x > y) {
		max = x;
	} else if (x < y) {
		max = y;
	} else if (y < z && x < z) {
		max = z;
	} else {}

	return max;

}

/* * */

int sum(x, y) {
	int z = x + y;
	return z;
}

int printSquare(x) {
	int y, z = 0;
	while(x > y) {
		while(x > z) {
			printf("*");
			z++;
		}
		printf("\n");
		y++;
		z=0;
	}
}
