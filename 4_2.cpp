/*
    Create a class item with the following data members:
    item code, cost, qty, total_price 
    Write member functions for each of the following 
    a. To get the data 
    b. To display the data 
    c. To calculate the total price of the item
*/

#include <iostream>
using namespace std;

class Item {
    public: 
    int itemCode;
    int cost;
    int qty;
    int total_price;

    Item() {}

    void getData() {
        cout << "Enter Item Code: ";
        cin >> itemCode;
        cout << "Enter Cost: ";
        cin >> cost;
        cout << "Enter Quantity: ";
        cin >> qty;
    }

    void disp() {
        cout << endl <<  "Item Code: " << itemCode << endl;
        cout << "Cost Per Item: " << cost << endl;
        cout << "Quantity: " << qty << endl;
        cout << "Total Price: " << total_price << endl;
    }

    void calcPrice() {
        total_price = cost * qty;
    }

    ~Item() {}
};

int main() {
    Item x;
    x.getData();
    x.calcPrice();
    x.disp();
    return 0;
}