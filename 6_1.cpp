/*
    Rewrite complex class (from assignment 5) using operator 
    overloading concept. 1.e. overload (+,-,*,/)
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

    Complex operator+(const Complex& other) const {
        Complex sum;
        sum.a = a + other.a;
        sum.b = b + other.b;
        return sum;
    }

    Complex operator-(const Complex& other) const {
        Complex res;
        res.a = a - other.a;
        res.b = b - other.b;
        return res;
    }

    Complex operator*(const Complex& other) const {
        Complex res;
        res.a = a * other.a;
        res.b = b * other.b;
        return res;
    }

    Complex operator/(const Complex& other) const {
        Complex res;
        res.a = a / other.a;
        res.b = b / other.b;
        return res;
    }

    ~Complex() {}

};

int main() {
    Complex c1;
    Complex c2;
    Complex c3;

    c1.getData();
    c2.getData();
    c3 = c1 / c2;
    c3.print();

    return 0;
}   