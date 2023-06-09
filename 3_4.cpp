// WAP that prints various types of data using function overloading. 

#include <iostream>
using namespace std;

void print(int n) {
    cout << n  << endl;
}

void print(char c) {
    cout << c  << endl;
}

void print(double x) {
    cout << x  << endl;
}

void print(char a[10]) {
    cout << a << endl;
}

int main() {
    print(324);
    print('!');
    print(34.53);
    print("HEllo!");
    return 0;
}
