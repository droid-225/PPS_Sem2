/*
    WA function power() to raise a number m to power n. The 
    function takes a double value for m and int value for n, and 
    returns the value (results) correctly. Use default argument 2 for n 
    and m to make a function to calculate squares when argument is 
    not passed. WAP for the same. 
*/

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