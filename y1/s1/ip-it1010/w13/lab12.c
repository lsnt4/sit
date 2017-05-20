#include <stdio.h>

struct doctor {
	int docNo;
	char name[20];
	double charge;
};

int main(void) {

	FILE *fPtr;
	fPtr = fopen("appointments.dat", "w");

	struct doctor doc[5];

	for(int i = 0; i < 2; i++) {
		printf("Input doctor number: ");
		scanf("%d", &doc[i].docNo);
		printf("Intput doctor name: ");
		scanf("%s", doc[i].name);
		printf("Input charge: ");
		scanf("%lf", &doc[i].charge);
	}

	puts("Number\tName\tCharge");

	for(int j = 0; j < 2; j++) {
		printf("%d\t%s\t%.2lf\n", doc[j].docNo, doc[j].name, doc[j].charge);
	}
	
	if(fPtr == NULL) {
		puts("File Error");
	} else {
		for( int d = 0; d < 2; d++) {
			fprintf(fPtr, "%d\t%s\t%.2lf\n", doc[d].docNo, doc[d].name, doc[d].charge);
		}
	}

	fclose(fPtr);

	//struct doctor doc1 = { 100, "Dr.Silva", 1500.00 };

}