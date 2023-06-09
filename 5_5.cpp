/*
    Create class complex with following data members:
    real and imaginary
    Use constructors and destructors properly and for 
    performing various arithmetic operations write member functions 
    for each of the following 
    a. Addition function to add two complex no 
    b. Subtraction function to add two complex no 
    c. Multiplication function to add two complex no 
    d. Division function to add two complex no 
    e. Function to get data and to print data 
*/

#include <iostream>
using namespace std;

class Complex {
    public:
    float a = 0, b = 0;

    Complex() {}

    void print() {
        cout << a << " + " << b << "i"; 
    }
    void getData() {
        cout << "Enter Real Value: ";
        cin >> a;
        cout << "Enter Imaginary Value: ";
        cin >> b;
    }  

    void add(Complex c1, Complex c2) {
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    }

    void sub(Complex c1, Complex c2) {
        a = c1.a - c2.a;
        b = c1.b - c2.b;
    }

    void mult(Complex c1, Complex c2) {
        a = c1.a * c2.a;
        b = c1.b * c2.b;
    }

    void div(Complex c1, Complex c2) {
        a = c1.a / c2.a;
        b = c1.b / c2.b;
    }

    ~Complex() {}

};

int main() {
    Complex c1;
    Complex c2;
    Complex c3;

    c1.getData();
    c2.getData();
    c3.div(c1, c2);
    c3.print();

    return 0;
}