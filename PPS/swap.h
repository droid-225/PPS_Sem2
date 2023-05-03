#pragma once
#include <iostream>
using namespace std;
//Write a function using variables as arguments to swap the values of a pair of
//integers using call by value, call by address and call by reference.

class swapper {
public:
	int x;
	int y;
	void printData() {
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
	void printData(int *x, int *y) {
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
	void vSwap() {
		cout << "Enter Value of x: ";
		cin >> x;
		cout << "Enter Value of y: ";
		cin >> y;
		printData();
		y = x + y;
		x = y - x;
		y = y - x;
		printData();
	}
	void aSwap(int *x, int *y) {
		printData(&x, &y);
		*y = *y + *x;
		*x = *y - *x;
		*y = *y - *x;
		printData();
	}
	void rSwap(int &x, int &y) {
		printData();
		y = x + y;
		x = y - x;
		y = y - x;
		printData();
	}
};

