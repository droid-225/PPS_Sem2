#include <iostream>
using namespace std;

enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int main() {
	week today;
	today = Tuesday;
	cout << "Day " << today + 1 << endl;

	return 0;
}