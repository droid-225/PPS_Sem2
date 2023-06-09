// WAP that prints a character on screen using function overloading.

#include <iostream>
using namespace std;

void printChar(char c) {
    cout << c << endl;
}

void printChar(char c, int n) {
    while(n != 0) {
        cout << c;
        n--;
    }
    cout << endl;
}

int main() {
    printChar('A');
    printChar('B', 5);
    return 0;
}