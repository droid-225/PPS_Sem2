/*
    Create a class distance with the following data members:
    int feet, float inches 
    Use constructors and destructors properly and write member 
    functions for the following 
    i. To get the data 
    j. To display the data 
    k. Add two distance objects 
*/

#include <iostream>
using namespace std;

class Distance {
    public:
        int feet = 0;
        float inches;

    void getDist() {
        cout << "Enter Distance in Inches: ";
        cin >> inches;
        while(inches >= 12) {
            feet++;
            inches -= 12;
        }
    }

    void print() {
        cout << "Distance = " << feet << "\' " << inches << "\" " << endl; 
    }

    void add(Distance d) {
        feet += d.feet;
        inches += d.inches;
        while(inches >= 12) {
            feet++;
            inches -= 12;
        }
    }
};

int main() {
    Distance d1;
    Distance d2;

    d1.getDist();
    d2.getDist();
    d1.print();
    d2.print();
    d1.add(d2);
    d1.print();

    return 0;
}