#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	std::system("clear");

	string input;

	cout << "Type 'exit' to end this application" << endl << endl;

	for(int i = 1; input != "exit";) {
		cin >> input;
	}

}