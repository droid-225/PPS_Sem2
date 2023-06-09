/*
    Create a student with the following data members: 
    rollno,name, marks[6],per, class 
    Write member functions for each of the following 
    a. To get the data
    b. To display the data 
    c. To calculate percentage 
    d. To calculate class based on percentage 
*/

#include <iostream>
using namespace std;

class Student {
    public:
    int rollNo;
    char name[20];
    float marks[6];
    float per;
    char Class;
    
    Student() {}

    void getData() {
        cout << "Roll No: ";
        cin >> rollNo;
        cout << "Name: ";
        cin >> name;
        cout << "Enter Marks:" << endl;
        for(int i = 0; i < 6; i++) {
            cout << "Subject "<< i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void disp() {
        cout << endl << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Percentage: " << per << "%" << endl;
        cout << "Class: " << Class << endl;
    }

    void calcPer() {
        float total;
        for(int i = 0; i < 6; i++) {
            total += marks[i];
        } 
        per = total / 6.0;
    }

    void calcClass() {
        if(per <= 100 && per >= 90) {
            Class = 'A';
        }
        if(per <= 89 && per >= 70) {
            Class = 'B';
        }
        if(per <= 69 && per > 40) {
            Class = 'C';
        }
        if(per <= 39 && per >= 0) {
            Class = 'F';
        }
    }

    ~Student() {}
};

int main() {
    Student s;
    s.getData();
    s.calcPer();
    s.calcClass();
    s.disp();
    return 0;
}