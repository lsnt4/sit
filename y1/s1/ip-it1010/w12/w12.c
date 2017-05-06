#include <stdio.h>

int ex2(void);
int ex1(void);


int main(void) {

	ex2();

}

int ex2(void) {

	int id;
	float avg;
	char name[50];

	FILE *cfPtr;
	cfPtr = fopen("marks.txt", "w");

	if(cfPtr == NULL) {
		printf("File is not created\n");
	} else {
		printf("Input id: ");
		scanf("%d", &id);
		printf("Input name: ");
		scanf("%s", name);
		printf("Input average: ");
		scanf("%f", &avg);

		fprintf(cfPtr, "ID: %d\n", id);
		fprintf(cfPtr, "Name: %s\n", name);
		fprintf(cfPtr, "Average: %.2f\n", avg);
	}
	fclose(cfPtr);
	return 0;

}


int ex1(void) {
	int number = 10;

	FILE *cfPtr;
	cfPtr = fopen("data.dat", "w");

	if(cfPtr == NULL) {
		printf("Cannot create file\n");
	} else {
		fprintf(cfPtr, "%d\n", number);
	}

	fclose(cfPtr);
	return 0;
}
