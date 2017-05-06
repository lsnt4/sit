#include <stdio.h>

int main(void) {

	int range[8];
	int salary;

	printf("Insert salary: ");
	scanf("%d", &salary);

	while(salary != -1) {

		if(salary >= 200 && salary <= 299) {
			range[0] = range[0] + 1;
		}

		printf("Insert salary: ");
		scanf("%d", &salary);
	}

	int i;
	for(i = 0; i < 8; i++) {
		printf("%d\n", range[i]);
	}

	return 0;
}
