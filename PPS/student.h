#pragma once
#include <iostream>
#include <string>
using namespace std;

class student {
public:
	int rollNum, phoneNum;
	string address, name;
	void getData() {
		cout << "Enter Name: ";
		cin >> name;
		cout << "Enter Roll Number: ";
		cin >> rollNum;
		cout << "Enter Phone Number: ";
		cin >> phoneNum;
		cin.ignore();
		cout << "Enter Address: ";
		getline(cin, address);
	}
	void printData() {
		cout << "Name: " << name << endl;
		cout << "Roll Number: " << rollNum << endl;
		cout << "Phone Number: " << phoneNum << endl;
		cout << "Address: " + address << endl;
	}
};

void run() {
	student s1, s2;
	s1.getData();
	s2.getData();
	cout << endl;
	s1.printData();
	s2.printData();
}


