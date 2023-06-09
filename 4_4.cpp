/*
    Create a time with following data members:
    int h, m, s
    Write member functions for each of the following
    a. To get the data in number of seconds
    b. To set the data in number of seconds
    c. To display data
    d. To convert seconds into h, m, s
*/

#include <iostream>
using namespace std;

class Time {
    public: 
    int h = 0, m = 0, s = 0;

    Time() {}

    void getData() {
        cout << "Enter Time in Seconds: ";
        cin >> s;
    }

    void setData(int sec) {
        s = sec;
        m = 0;
        h = 0;
    }

    void disp() {
        cout << h << ":" << m << ":" << s << endl;
    }

    void convert() {
        while(s >= 60) {
            m++;
            s -= 60;
        }
        while(m >= 60) {
            h++;
            m -= 60;
        }
    }

    ~Time() {}
};

int main() {
    Time t;
    t.getData();
    t.convert();
    t.disp();
    t.setData(100);
    t.convert();
    t.disp();
    return 0;
}