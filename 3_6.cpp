#include<iostream>
#include<math.h>
using namespace std;

int power(double m = 2, int n = 2) {
    return pow(m,n);
}

int main() {
    cout<<"2.5 ^ 3 = " << power(3, 4)<<endl;
    cout<<"default ans: " << power();
}