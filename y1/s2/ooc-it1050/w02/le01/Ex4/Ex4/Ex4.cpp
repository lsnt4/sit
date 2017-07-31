// Ex4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x = 1;

	cout << "N\t10*N\t100*N\t1000*N\n";

	while(x <=10 ) {
		cout << x << "\t" << x*10 << "\t" << x*100 << "\t" << x*1000 << endl;
		x++;
	}

	cout << endl << endl;

	for(int i = 1; i <= 10; i++) {
		cout << i << "\t" << i*10 << "\t" << i*100 << "\t" << i*1000 << endl;
	}

	cin >> x;
	return 0;
}

