#include <stdio.h>

int main() {
	
	int i;

	scanf("%d", &i);

	switch(i) {
		case 1:
			printf("Mathematics for Computing\n");
			break;
		case 2:
			printf("Introduction to Programming\n");
			break;
		case 3:
			printf("Introduction to Computer Systems\n");
			break;
		case 4:
			printf("Language Skills\n");
			break;
		default:
			printf("No valid input detected\n");
	}

	return 0;

}
