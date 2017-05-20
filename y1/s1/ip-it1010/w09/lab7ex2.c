/* 
 * Pi Calculator
 * W9\LS7\EX2
 */

#include<stdio.h>

int main(void) {

	float c1, c2, ans = 0.0;
	int rounds = 2;
	int inits = 1;
	int oddNum;
	for(int x = 1; x < rounds;) {
		oddNum = 2*x - 1;
		c1 = 4.0/oddNum;
		c2 = 4.0/(oddNum + 2);
		ans = ans + c1 - c2;
		x += 2;
		inits += 1;
		if(ans < 3.14159) { rounds += 2; }

		printf("%d %f\n", inits, ans);
	}

	return 0;
}
