// W.A.P. to show the effects of manipulator endl and setw. 

#include <iostream>
#include <iomanip>
using namespace std;
   
int main() {
    int values[] = {10, 20, 30, 40, 50};
    string labels[] = {"apple", "banana", "cherry", "date", "elderberry"};
   
    for (int i = 0; i < 5; i++) {
        cout << left << setw(15) << labels[i] << values[i] << endl;
    }
   
    return 0;
}