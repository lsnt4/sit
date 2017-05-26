#include <stdio.h>

int main(void) {
	float localCharges, intCharges, roamingCharges;
	char *phoneNo;

	FILE *cfPtr;
	cfPtr = fopen("charges.dat", "w+");
	if(cfPtr == NULL) {
		printf("File IO Error");
	} else {

		for(int i = 1; i <= 5; i++) {
			printf("\nPhone number: "); scanf("%s", phoneNo);
			printf("Local Charges: "); scanf("%f", &localCharges);
			printf("International Charges: "); scanf("%f", &intCharges);
			printf("Roaming Charges: "); scanf("%f", &roamingCharges);

			fprintf( cfPtr, "%s\t%.2f\t%.2f\t%.2f\n", phoneNo, localCharges, intCharges, roamingCharges );
		}
	}
	fclose(cfPtr);
	return 0;
}