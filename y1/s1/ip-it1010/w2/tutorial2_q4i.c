#include <stdio.h>

int busfare_calculation(int x, int y, int z);

int main() {

	int j1, j2, j3, ans;

	printf("First fare:\t");
	scanf("%d", &j1);
	printf("Second fare:\t");
	scanf("%d", &j2);
	printf("Third fare:\t");
	scanf("%d", &j3);

	ans = busfare_calculation(j1, j2, j3);

	printf("\nTotal amount required for this semester: %d\n", ans);

}

int busfare_calculation(int x, int y, int z) {

	int j, ret;
	j = x + y + z;

	ret = (j * 2) * 5 * 14;

	return ret;

}