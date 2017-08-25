#include <iostream>

using namespace std;

class Account {
private:
	int acNo;
	float acBalance;
public:
	Account(int accNo, float balance);
	void credit(float amount);
	void debit(float amount);
	void print();
};

Account::Account(int accNo, float balance) {
	acNo = accNo;
	acBalance = balance;
}

void Account::credit(float amount) {
	acBalance = acBalance + amount;
}

void Account::debit(float amount) {
	if (acBalance >= amount) {
		acBalance = acBalance - amount;
	}
}

void Account::print() {
	cout << acBalance << endl;
}

int main() {
	Account* acc = new Account(82535800, 3000.00);
	acc->credit(2000);
	acc->debit(1000);
	acc->print();
}