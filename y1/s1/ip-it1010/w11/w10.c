#include <stdio.h>
#include  <string.h>
#define SIZE 10

int md_array2();
int md_array();
int char_arr();
int array_1();
int array_ex1();

int main(void) {
	md_array2();
}

int md_array2() {

	int row, column;
	int a[2][3];
	int total;

	for(row = 0; row <=1; ++row) {

		for(column = 0; column <=2; ++column) {
			printf("\nna[row][column] = ", row, column);
			scanf("%d", &a[row][column]);
		}

		for(row = 0; row <=1; ++row)
			for(column = 0; column<=2; ++column)
				total += a[row][column];
	}

	printf("The total of the elements of the array : %d", total);
	return 0;

}

int md_array() {
	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	int r, c;
	for(r = 0; r < 2; r++) {
		for(c = 0; c < 3; c++) {
			printf("%d",  arr[r][c]);
		}
		printf("\n");
	}

}

int char_arr() {
	char x[] = "Happy birthday to you";
	char y[SIZE];

	strcpy(y, x);
	printf("The string in array y is : %s\n", y);

	return 0;
}

int array_ex1() {

	int i, max;

	int counts[SIZE] = {0};

	for(i = 0; i < SIZE; i++) {

		printf("Input counts[%d] = ", i);
		scanf("%d", &counts[i]);
	}

	for(i = 0; i < SIZE; i++) {
		printf("%7d%13d\n", i, counts[i]);
	}

	max = counts[0];

	for (i = 1; i < SIZE; i++) {
		if(counts[i] > max) {
			max = counts[i];
		}
	}

	printf("The maximum is : %d \n", max);

	return 0;
}


int array_1() {

	int n[SIZE] = { 5, 12, 34, 56, 65 };
	size_t i;

	for(i = 0; i < SIZE; i++) {
		//n[i] = 0;
	}

	printf("%s%13s\n", "Element", "Value");

	for(i = 0; i < SIZE; ++i) {
		printf("%7d %13d\n", i, n[i]);
	}

	return 0;
}
