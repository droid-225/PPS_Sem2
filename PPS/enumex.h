#pragma once
#include <iostream>
using namespace std;

enum Direction {
	North = 0,
	East = 1,
	South = 2,
	West = 3
};

void run() {
	Direction dir = North;

	switch (dir) {
	case North:
		cout << "You are going North!";
		break;
	case East:
		cout << "You are going East!";
		break;
	case South:
		cout << "You are going South!";
		break;
	case West:
		cout << "You are going West!";
		break;
	default:
		cout << "You are going nowhere!";
		break;
	}
}