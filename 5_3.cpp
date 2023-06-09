/*
    Declare a class catalog with following data members: 
    title, author, year_of_publication, no_of_copies 
    create array of 15 objects, Use constructors and destructors 
    properly and write member function for each of the following 
    a. To get the data 
    b. To display the data 
    c. To search the particular title, if exists then display that particular record 
*/

#include <iostream>
#include <string>
using namespace std;

class Catalog {
    public:
        string title;
        string author;
        int pubYear;
        int copies;

        Catalog() {}

        void disp() {
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Publication Year: " << pubYear << endl;
            cout << "Copies: " << copies << endl;
        }

        ~Catalog() {}
};

void getData(Catalog* catalogs, int size) {
    Catalog catalog;

    for(int i = 0; i < size; i++) {
        cout << "Title: ";
        getline(cin, catalog.title);
        cout << "Author: ";
        getline(cin, catalog.author);
        cout << "Publication Year: ";
        cin >> catalog.pubYear;
        cout << "Copies: ";
        cin >> catalog.copies;
        cin.ignore();
        cout << endl;

        catalogs[i] = catalog;
    }
}

void search(Catalog* catalogs, int size) {
    string q;
    cout << "Enter Title to Find: ";
    getline(cin, q);

    for(int i = 0; i < size; i++) {
        if(catalogs[i].title == q) {
            catalogs[i].disp();
            break;
        }
    }
    
}

int main() {
    Catalog catalogs[3];

    getData(catalogs, 3);
    search(catalogs, 3);

    return 0;
}