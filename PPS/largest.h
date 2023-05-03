#pragma once
#include <iostream>
using namespace std;

inline int largest(int a, int b, int c) {
	if (a > b && a > c)
		return a;
	else if (b > a && b > c)
		return b;
	else
		return c;
}

void run() {	
	int a, b, c;
	cout << "Enter Value of a: ";
	cin >> a;
	cout << "Enter Value of b: ";
	cin >> b;
	cout << "Enter Value of c: ";
	cin >> c;

	cout << "Largest = " << largest(a, b, c) << endl;
}