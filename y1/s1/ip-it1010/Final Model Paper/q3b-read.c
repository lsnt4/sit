#include <stdio.h>

int main(void) {
	float localCharges, intCharges, roamingCharges;
	char *phoneNo;

	FILE *cfPtr;
	cfPtr = fopen("charges.dat", "r");
	if(cfPtr == NULL) {
		printf("File IO Error");
	} else {
		while (fscanf(cfPtr, "%s\t%f\t%f\t%f\n", phoneNo, &localCharges, &intCharges, &roamingCharges )>0) {
			printf("%s : %.2f\n", phoneNo, localCharges + intCharges + roamingCharges );
		}
	}
	fclose(cfPtr);
	return 0;
}