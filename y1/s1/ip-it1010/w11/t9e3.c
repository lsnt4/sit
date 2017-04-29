#include <stdio.h>

int qualityPoints(double avg);

int main(void) {

	testQualityPoints();

	return 0;


}


int qualityPoints(double avg) {

	if(avg >= 90 && avg <=100)
		return 4;
	else
		if(avg >= 80)
			return 3;
		else
			if(avg >= 70)
				return 2;
			else
				if (avg >= 60)
					retun 1;
				else
					return0;
					


}


void testQualityPoints() {

	assert( qualityPoints(95.6) == 4 );
	assert( qualityPoints(82.3) == 3 );
	assert( qualityPoints(77.1) == 2 );
	assert( qualityPoints(63.2) == 1 );
	assert( qualityPoints(50.2) == 0 );

}
