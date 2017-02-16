#include <iostream>
#include <cstdlib>

using namespace std;

class MyAwesomeClass {
	public:
		string greet;
		void display() {
			greet = "Hello World!";
			cout << greet << endl;
		}
};

int main() {

	MyAwesomeClass mac;
	mac.display();

}