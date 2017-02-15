#include <stdio.h>

int main() {

	int x = 1;
	while (x <= 10) {
		printf("Current value of 'x' is %d\n", x);
		x++;
	}

	int y = 10;
	do {
		printf("Current value of 'y' is %d\n", y);
		y--;
	} while (y > 0);

	return 0;
}
