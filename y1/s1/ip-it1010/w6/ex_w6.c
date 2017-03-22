#include <stdio.h>

int main(void) {

	//ex1();
	//ex2();
	//ex3();
	//ex4();
	//t6q1();
	//t6q2();

	return 0;
}

int t6q2() {

	int numRows, num, currentNum = 0, init = 0;

	printf("Enter required number count: ");
	scanf("%d", &numRows);

	while(numRows > init) {
		init++;
		scanf("%d", &num);
		if(currentNum > num) {
			currentNum = num;
		}
	}

	printf("%d", currentNum);

}


int t6q1() {

	int num, nums, row, sum = 0;

	printf("Number of numbers? ");
	scanf("%d", &nums);

	for(row = 1; row <= nums; row++) {
		scanf("%d", &num);
		sum = sum + num;
	}

	printf("%d\n", sum);

}


int ex4() {

	int x;

	for(x = 3; x <= 23; x+=5) {

		printf("%d , ", x);

	}

}

int ex1() {

	int number = 1;

	while (number <= 100) {
		if (number%2 == 0) { printf("%d\n", number); }
		number++;
	}

}

int ex2() {

	int grade, count = 0, total = 0;
	float average;

	printf("Input grade: ");
	scanf("%d", &grade);

	while( grade != -1 ) {
		total = total + grade;
		count++;
		printf("Input grade: ");
		scanf("%d", &grade);
	}
	
	average = (float) total / count;
	printf("%.2f\n", average);
}

int ex3() {
	int x, sum = 0;

	for(x = 1; x<=10; x++) {
		sum = sum + x;
	}

	printf("%d\n", sum);
}
