#include <stdio.h>

int q1();
int q2();
int q3();

int main(void) {

}

int q3() {

	float sales[4][5];
	float input;

	for(int p = 1; p <= 4; p++) {
		printf("Sales Person %d\n", p);
		for(int q = 1; q <= 5; q++) {
			printf("Product %d: ", q);
			scanf("%f", &input);
			sales[p][q] = input;
		}
	}

	for(int r = 1; r <= 5; r++) {
		float t = 0;
		for(int s = 1; s <= 5; s++) {
			t = t + sales[r][s];
		}
		printf("Product %d: %d\n", r, t);
	}
}



int q2() {

	int A[4][4] = { {5, 7, 8, 10}, {9, 3, 0, 6}, {8, 1, 9, 2}, {4, 7, 2, 1} };
	int B[4][4] = { {2, 2, 1,  3}, {8, 1, 3, 1}, {1, 2, 2, 4}, {3, 1, 1, 2} };
	int C[4][4];

	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			C[i][j] =  A[i][j] + B[i][j];
		}
	}

	for(int k = 0; k < 4; k++) {
		for(int l = 0; l < 4; l++) {
			printf("%d\t", C[k][l]);
		}
		printf("\n");
	}
}



/**
 * Palindrome Check
 */
int q1() {
/*	int i, length, status = 0;
	char word[10];

	printf("Enter a word: ");
	scanf("%s", word);

	length = strlen(word);
	char word_rev[length];

	for(i = 0; i <= length; i++) {
		printf("%s", sizeof( word[i]) );
//		strcpy(word_rev[], word[length - i]);
	}

//	int k;
//	for( k = 0; k < length; k++) {
//		printf("%s", word_rev[k]);
//	}

	for (i = 0; i < length; i++) {
		if(word[i] != word[length - i - 1]) {
			status = 1;
			break;
		}
	}

	if(status) {
		puts("No");
	} else {
		puts("Yes");
	}
	*/
}
