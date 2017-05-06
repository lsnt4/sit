#include <stdio.h>

int main(void) {

	int num[10] = {25, 32, 45, 2, 13, 9, 6, 10, 17, 4};

	int key;
	printf("Enter the key: ");
	scanf("%d", &key);

	int i, found;
	for(i=0; i < 10; i++) {

		if(num[i] == key) {
			found = 1;
			printf("Found at %d", i);
			break;
		} else {
			found = 0;
		}
	}
	
	if(found == 0){ printf("Not found"); }	

	return 0;

}
