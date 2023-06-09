/*
    Create a student with the following data members
    rollno, name, marks[6], per, class 
    Write member functions for each of the following 
    a. To get the data 
    b. To display the data 
    c. To calculate percentage 
    d. To calculate class based on percentage 
    e. To sort the students percentage wise 
    f. Use constructors and destructors 
*/

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
        cout << endl;
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

    bool operator<(const Student& other) const {
        return per < other.per;
    }

    ~Student() {}
};

void getDatas(Student* students, int size) {
    Student s;

    for(int i = 0; i < size; i++) {
        s.getData();
        s.calcPer();
        s.calcClass();

        students[i] = s;
    }
}

void sortStudents(Student* students, int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(students[j].per < students[j+1].per) {
                swap(students[j], students[j+1]);
            }
        }
    }
}

void print(Student* students, int size) {
    sortStudents(students, size);
    
    for(int i = 0; i < size; i++) {
        students[i].disp();
    }
}

int main() {
    Student students[5];

    getDatas(students, 5);
    print(students, 5);
    
    return 0;
}