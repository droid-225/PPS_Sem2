/*
    Create a class book with following data members: 
    bookname, authorname, rate, qty 
    Write member functions for each of the following 
    a. To get the data 
    b. To display the data 
    c. To calculate the total price of the book 
*/

#include <iostream>
using namespace std;

class Book {
    public: 
    char bookName[20];
    char authorName[20];
    int rate;
    int qty;
    int total_price;

    Book() {}

    void getData() {
        cout << "Enter Book Name: ";
        cin >> bookName;
        cout << "Enter Author's Name: ";
        cin >> authorName;
        cout << "Enter Cost: ";
        cin >> rate;
        cout << "Enter Quantity: ";
        cin >> qty;
    }

    void disp() {
        cout << endl <<  "Book Name: " << bookName << endl;
        cout << "Author: " << authorName << endl;
        cout << "Cost Per Book: " << rate << endl;
        cout << "Quantity: " << qty << endl;
        cout << "Total Price: " << total_price << endl;
    }

    void calcPrice() {
        total_price = rate * qty;
    }

    ~Book() {} 
};

int main() {
    Book b;
    b.getData();
    b.calcPrice();
    b.disp();
    return 0;
}