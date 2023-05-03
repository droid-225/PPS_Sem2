#include<conio.h>
#include<iostream>
using namespace std;

int ascii(char ch) {
    return ch;
}

char ascii(int n) {
    return n;
}

int main() {
    int n;
    char ch;
    cout<<"enter value of integer= ";
    cin>>n;
    cout<<"enter value of character= ";
    cin>>ch;
    cout<<"int= "<<ascii(n)<<endl;
    cout<<"char= "<<ascii(ch);
} 
