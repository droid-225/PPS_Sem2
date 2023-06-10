/*
    Create a class date with following data member:
    int day, month and year 
    Use constructors and destructors properly and write member 
    functions for each of the following 
    e. To set the date 
    f. To get the date 
    g. To Print the date into dd/mm/yy format 
    h. Nextday function, to increment the day by one, while 
    incrementing day by one be sure for two things 
    i. Must increment month by one if day is 29, 28, 30 or 31 in a 
    particular month 
    11. Must increment year accordingly 
*/

#include <iostream>
using namespace std;

class Date {
    public:
        int day, month, year;

        Date(int d, int m, int y) {
            day = d;
            month = m;
            year = y;
        }

        Date() {}

        void getDate() {
            cout << "Enter Day: ";
            cin >> day;
            cout << "Enter Month: ";
            cin >> month;
            cout << "Enter Year: ";
            cin >> year;
        }

        void setDate(int d, int m, int y) {
            day = d;
            month = m;
            year = y;
        }

        void print() {
            cout << day << "/" << month << "/" << year << endl;
        }

        void nextDay() {
            day++;
            if(day > 30) {
                month++;
                day -= 30;
            }
            if(month > 12) {
                year++;
                month -= 12;
            }
        }

        ~Date() {}
};

int main() {
    Date date;

    date.getDate();
    date.print();
    date.setDate(30,12,2023);
    date.print();
    date.nextDay();
    date.print();

    return 0;
}