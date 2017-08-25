#include <iostream>
using namespace std;

class Inventory {
private:
	int prodID;
	int stockBal;
public:
	Inventory(int ID, int stock);
	void purchase(int qty);
	void sale(int qty);
	void print();
};

Inventory::Inventory(int ID, int stock) {
	prodID = ID;
	stockBal = stock;
}


void Inventory::purchase(int qty) {
	stockBal = stockBal + qty;
}

void Inventory::sale(int qty) {
	if(stockBal >= qty) {
		stockBal = stockBal - qty;
	}
}

void Inventory::print() {
	cout << stockBal << endl;
}

int main() {
	Inventory* inv = new Inventory(10223, 2000);
	inv->purchase(200);
	inv->sale(150);
	inv->print();
}