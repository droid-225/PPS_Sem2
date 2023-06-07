/*
    WAP to print following using default arguments 
    repchar() // prints 45 times asterisks (*) 
    repchar (‘=) // prints 45 times (=) 
    repchar('+',30) // prints 30 times (+)
*/

#include <iostream>
using namespace std;

void rephar(char ch = '*', int n = 45) {
    for(int i = 0; i < n; i++)
        cout << ch;
}   

int main() {
    rephar();
    cout<<endl;
    rephar('=');
    cout<<endl;
    rephar('+',30);
}