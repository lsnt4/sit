#include <iostream>

using namespace std;

class W6 {

	public:
		void ex1() {
			int number = 1;

			while (number <= 100) {
				if(number%2 == 0) {
					cout << number << endl;
				}
				number++;
			}
		}

		void ex2() {

			int grade, count = 0, total = 0;
			float average;

			cout << "Input grade: ";
			cin >> grade;
			
			while ( grade != -1 ) {
				total = total + grade;
				count++;
				cout << "Input grade: ";
				cin >> grade;
			}

			average = (float) total / count;
			cout << average << endl;

		}

		void ex3() {

			int x, sum = 0;

			for(x = 1; x <= 10; x++) {

				sum = sum + x;

			}
			
			cout << sum << endl;
		}

		void ex4() {

			for(int x = 3; x <= 23; x+=5) {
				cout << x << " ";
			}

		}

		void tt1() {

			

		}

};

int main() {

	W6 obj;
	//obj.ex1();
	//obj.ex2();
	//obj.ex3();
	//obj.ex4();
	//obj.tt1();

	return 0;	

}
