#include <iostream>
using namespace std;
 
class Complex {

    private:
       int real, imag;

    public:
    Complex(int a = 0, int b = 0) {
        real = a;
        imag = b;
    }
    
    Complex operator+(Complex const& x) {
        Complex sum;
        sum.real = real + x.real;
        sum.imag = imag + x.imag;
        return sum;
    }
    void print() {
        cout << real << " + " << imag << "i" << endl;
    }

};

int main() {
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    c3.print();
}