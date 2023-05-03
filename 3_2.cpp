#include <iostream>
using namespace std;

int a[3][3], b[3][3], sum[3][3];

void get_a(int r = 3, int c = 3) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout<<"a["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
        }
    }
}

void get_b(int r = 3, int c = 3) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout<<"b["<<i<<"]["<<j<<"] = ";
            cin>>b[i][j];
        }
    }
}

void add(int r = 3, int c = 3) {
for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    get_a(2,2);
    get_b(2,2);
    add(2,2);
}