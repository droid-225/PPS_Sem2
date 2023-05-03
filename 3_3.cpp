#include <iostream>
using namespace std;

void zerosmall(int &a, int &b) {
    if(a < b)
        a = 0;
    else 
        b = 0;
}

int main() {
    int i = 2, j = 3;
    zerosmall(i, j);
    cout<<"i = "<<i<<" j = "<<j;
}