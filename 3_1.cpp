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