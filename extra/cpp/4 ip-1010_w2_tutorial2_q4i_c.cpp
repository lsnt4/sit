#include <iostream>
#include <cstdlib>

using namespace std;

class BusfareCalculation {
public:
	int calc(int x, int y, int z) {

	int j, ret;
	j = x + y + z;

	ret = (j * 2) * 5 * 14;

	return ret;

	}
};

int main() {

	int j1, j2, j3, ans;

	cout << "First fare:\t ";
	cin >> j1;
	cout << "Second fare:\t ";
	cin >> j2;
	cout << "Third fare:\t ";
	cin >> j3;

	BusfareCalculation bfc;
	ans = bfc.calc(j1, j2, j3);

	cout << ans << endl;
}