#pragma once
// Write a program to add two matrices using default arguments
#include <iostream>
using namespace std;

int arr1[3][3]; int arr2[3][3]; int sum[3][3];

void arr1Init(int cols = 3, int rows = 3) {
	cout << "Enter Values for Array 1:" << endl;
	for (int i = 0; i < cols; i++) {
		for (int j = 0; j < rows; j++) {
			cout << "[" << i << "][" << j << "]: ";
			cin >> arr1[i][j];
		}
		cout << endl;
	}
}

void arr2Init(int cols = 3, int rows = 3) {
	cout << "Enter Values for Array 2:" << endl;
	for (int i = 0; i < cols; i++) {
		for (int j = 0; j < rows; j++) {
			cout << "[" << i << "][" << j << "]: ";
			cin >> arr2[i][j];
		}
		cout << endl;
	}
}

void arrSum(int cols = 3, int rows = 3) {
	for (int i = 0; i < cols; i++) {
		for (int j = 0; j < rows; j++) {
			sum[i][j] = arr1[i][j] + arr2[i][j];
			cout << sum[i][j] << " ";
		}
		cout << endl;
	}
}

void run() {
	arr1Init();
	cout << endl;
	arr2Init();
	arrSum();
}