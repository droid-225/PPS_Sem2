//Write a C++ program to create a class to read and add two distances.

#pragma once
#include <iostream>
using namespace std;

class reader {
public:
	int dist1;
	int dist2;
	void readDists() {
		cout << "Enter Two Distances: ";
		cin >> dist1 >> dist2;
	}
	int distSum() {
		return dist1 + dist2;
	}
};