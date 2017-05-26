#include <stdio.h>

int main(void) {

	float usage[4][7] = {1.2, 2.1, 0.8, 0.0, 1.0, 1.3, 4.0, 1.5, 3.2, 1.0, 1.3, 4.0, 1.5, 3.2, 2.3, 0.4, 1.2, 2.1, 0.8, 0.0, 2.6, 2.1, 1.7, 7.0, 1.2, 2.1, 0.8, 0.0};

	int maxDay, minDay, incrWeek, incrDay;
	float maxUnit, minUnit, average, total, maxInit, tmpInit, curUnit;

	maxUnit = minUnit = usage[0][0];

	for(incrWeek = 0; incrWeek <= 3; incrWeek++) {
		for(incrDay = 0; incrDay <= 6; incrDay++) {
			curUnit = usage[incrWeek][incrDay];

			if(maxUnit <= curUnit) {
				maxUnit = curUnit;
				maxDay = (incrWeek) * 7 + incrDay + 1;
			}

			if(minUnit >= curUnit) {
				minUnit = curUnit;
				minDay = (incrWeek) * 7 + incrDay + 1;
			}

			total = curUnit + total;
		}
	}

	average = total / 28.0;

	printf("\nDay of the Month with maximum usage: %d\n", maxDay);
	printf("Maximum Usage in units: %.2f\n", maxUnit);
	printf("Day of the Month with minimum usage: %d\n", minDay);
	printf("Minimum Usage in units: %.2f\n", minUnit);
	printf("Average usage for the Month: %.2f\n", average);
	printf("Total usage for the Month: %.2f\n", total);

	return 0;
}