#include <iostream>
using namespace std;

class Invoice {
private:
	int invPartNo, invQty;
	float invPrice, invDiscount;
public:
	Invoice(int partNo, int qty, float price);
	void calcDiscount(float percentage);
	void calcFinalAmount();
	void print();
};

Invoice::Invoice(int partNo, int qty, float price) {
	invPartNo = partNo;
	invQty = qty;
	invPrice = price;
}

void Invoice::calcDiscount(float percentage) {
	if (invPrice * invQty >= 1000.00)	{
		invDiscount = invPrice * invQty * percentage / 100.00;
	}
}

void Invoice::calcFinalAmount() {
	invPrice = (invPrice * invQty) - invDiscount;
}

void Invoice::print() {
	cout << "Part No: " << invPartNo << endl;
	cout << "Quantity: " << invQty << endl;
	cout << "Price: " << invPrice + invDiscount << endl;
	cout << "Final Amount: " << invPrice << endl;
}

int main() {
	Invoice* inv = new Invoice(1123, 10, 150.00);
	inv->calcDiscount(10);
	inv->calcFinalAmount();
	inv->print();
	return 0;
}