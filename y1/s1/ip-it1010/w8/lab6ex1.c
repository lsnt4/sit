#include <stdio.h>

int main(void) {

	int examScore, homeworkScore;
	float percentageExam, percentageHomework, temp1, temp2, average;

	printf("Please enter the points earned for the exam: ");
	scanf("%d", &examScore);

	if(examScore < 0 || examScore > 100) {
		printf("Error in input: value should be in [0,100]\n");
		return -1;
	}

	printf("Please enter the percentage given for the exam: ");
	scanf("%f", &percentageExam);

	printf("Please enter the points earned for homework: ");
	scanf("%d", &homeworkScore);

	printf("Please enter the percentage given for homework: ");
	scanf("%f", &percentageHomework);

	if((percentageExam + percentageHomework) != 100.0) {
		printf("Error: the two percentages must add to 100.0 \n");
		return -1;
	}

	temp1 = examScore / 100.0 * percentageExam;
	temp2 = homeworkScore / 100 * percentageHomework;
	average = (temp1 + temp2)/2;

	printf("Overall course average is %.2f", average);

	return 0;

}
