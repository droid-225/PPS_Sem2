// W.A.P to count number of objects created for any class.

#include <iostream>
using namespace std;

int count;

class Example {
    public:
    Example() {
        count++;
    }
    ~Example() {
        count--;
    }
};

int main() {
    Example x;
    Example y;
    Example z;

    cout << "Number of objects of class Example = " << count << endl;

    Example d;

    cout << "Number of objects of class Example = " << count << endl;

    return 0;
}