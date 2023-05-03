#pragma once
#include <iostream>
using namespace std;
//Write a C++ program to find volume of cube, cylinder and rectangular box using concepts of function overloading.

double volume(int side) {
	return side * side * side;
}
double volume(int length, int width, int height) {
	return length * width * height;
}
double volume(int radius, int height) {
	return 3.14 * radius * radius * height;
}

void run() {
	cout << "Volume of Cube: " << volume(3) << endl;
	cout << "Volume of Cylinder: " << volume(3, 3) << endl;
	cout << "Volume of Rectuanglar Box: " << volume(3, 4, 5) << endl;
}