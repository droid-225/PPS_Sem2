/*
    Create class book with following data members:
    book name, author name, Qty, price 
    Read data for 10 books, Use constructors and destructors properly 
    and write member function for each of the following 
    a. To get the data 
    b. To display the data 
    c. To find total price (i.e. qty * price) 
    d. Sort it according to the total price 
*/

#include <iostream>
#include <string>
using namespace std;

class Book {
    public:
        string bookName;
        string authorName;
        int qty;
        float price;
        float total = 0;

        Book() {}

        ~Book() {}

        // Compare players based on batting average (used for sorting)
        bool operator<(const Book& other) const {
            return total < other.total;
        }
};

void getData(Book* books, int n) {
    for(int i = 0; i < n; i++) {
        Book book;

        cout << "Book " << i+1 << ": ";
        getline(cin, book.bookName);
        cout << "Author: ";
        getline(cin, book.authorName);
        cout << "Quantity: ";
        cin >> book.qty;
        cout << "Price per Book: ";
        cin >> book.price;
        cin.ignore();
        book.total = book.price * book.qty;

        books[i] = book;
        cout << endl;
    }
}

void sortBooks(Book* books, int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(books[j].total < books[j + 1].total)
                swap(books[j], books[j+1]);
        } 
    }
}

void print(Book* books, int n) {
    sortBooks(books, n);

    cout << "Books Sorted By Total Price (Descending):" << endl;
    for(int i = 0; i < n; i++) {
        cout << "Name: " << books[i].bookName << endl;
        cout << "Author: " << books[i].authorName << endl;
        cout << "Total Price: " << books[i].total << endl;
        cout << endl;
    }
}

int main() {
    Book books[10];

    getData(books, 10);
    print(books, 10);

    return 0;
}

