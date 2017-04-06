#include <iostream>

using namespace std;

class tute5 {

public:
	void ex1() {
		cout << "OK" << endl;
	}

	void ex2() {
		int a, b, c;
		int sum, product, min, max;
		float average;

		cout << "Enter number 1: ";
		cin >> a;
		cout << "Enter number 2: ";
		cin >> b;
		cout << "Enter number 3: ";
		cin >> c;

		sum = a + b + c;
		product = a*b*c;
		average = (float) sum / 3;

		if (a < b) {
			min = a;
		} else {
			min = b;
		}

		if (min < c) {
			min = min;
		} else {
			min = c;
		}


		if (a > b) {
			max = a;
		} else {
			max = b;
		}

		if (max > c) {
			max = max;
		} else {
			max = c;
		}

		cout << "Sum: " << sum << endl;
		cout << "Product: " << product << endl;
		cout << "Average: " << average << endl;
		cout << "Min: " << min << endl;
		cout << "Max: " << max << endl;
	}

	void ex3() {
		int year;


		cout << "Enter an year: ";
		cin >> year;
		
		if((year%4==0) && (year%400==0) && (year%100!=0)){
			cout << "Leap year" << endl;
		} else {
			cout << "Not a leap year" << endl;
		}
	}

	void ex4() {
	
		char grade;

		cout << "Enter grade: ";
		cin >> grade;

		if (grade == 'A' || grade == 'a') {
			cout << "Excellent" << endl;
		} else if (grade == 'B' || grade == 'b') {
			cout << "Best" << endl;
		} else if (grade == 'C' || grade == 'c') {
			cout << "Good" << endl;
		} else {
			cout << "OK" << endl;
		}

	}

	void ex5() {

		int no1, no2, ans;
		char op;

		cout << "Enter number 1: ";
		cin >> no1;
		cout << "Enter number 2: ";
		cin >> no2;
		cout << "Enter operator: ";
		cin >> op;

		cout << endl;

		switch (op) {

			case '+' : ans = no1 + no2; break;
			case '-' : ans = no1 - no2; break;
			case '/' : ans = no1 / no2; break;
			case '*' : ans = no1 * no2; break;
			default  : cout << "Invalid operator" << endl;
		}
		cout << "Answer: " << ans << endl;
	}

	void ex6() {


	}

	void ex7() {

		

	}

};

int main() {

	tute5 obj;

	//obj.ex1();
	//obj.ex2();
	//obj.ex3();
	//obj.ex4();
	//obj.ex5();
	//obj.ex6();
	//obj.ex7();

	return 0;
}
