/*
    Craete a class player with the following data members:
    name, age, runs, hi, lo, tsts, avg
    Write member functions for each of the following
    a. To get the data
    b. To display the data
    c. To calculate the average of the player
*/

#include <iostream>
using namespace std;

class Player {
    public:
    char name[20];
    int age;
    int runs;
    int hi;
    int lo;
    int tsts;
    float avg;

    Player() {
        //cout << "Program Start" << endl;
    }

    void getData() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Runs: ";
        cin >> runs;
        cout << "Enter High: ";
        cin >> hi;
        cout << "Enter Low: ";
        cin >> lo;
        cout << "Enter Tests: ";
        cin >> tsts;
    }

    void disp() {
        
        cout << endl <<  "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Runs: " << runs << endl;
        cout << "High: " << hi << endl;
        cout << "Low: " << lo << endl;
        cout << "Tests: " << tsts << endl;
        cout << "Average: " << avg << endl;
    }

    void calcAvg() {
        avg = runs / float(tsts);
    }

    ~Player(){
        //cout << endl << "Program Over";
    }
};

int main() {
    Player p;
    p.getData();
    p.calcAvg();
    p.disp();

    return 0;
}