/*
    Create class string with the data member: 
    char str[20], 
    Use constructors and destructors properly and write member 
    functions for each of the following 
    l. To get the data 
    m. To display the data 
    n. To concatenate two string objects 
*/

#include <iostream>
#include <cstring>
using namespace std;

class String {
    public:
        char str[20];

        String() {}

        String(const char s[]) {
            strcpy(str, s);
        }

        void getString() {
            cout << "Enter A String: ";
            cin.getline(str, 20);
        }

        void print() {
            cout << str << endl;
        }

        ~String() {}
};

String concat(const String& s1, const String& s2) { // Use const reference for input parameters
    int len1 = strlen(s1.str); // Use strlen to get string length
    int len2 = strlen(s2.str);
    int totalLen = len1 + len2;

    char* result = new char[totalLen + 1];
    int index = 0;

    for (int i = 0; i < len1; i++) {
        result[index] = s1.str[i];
        index++;
    }

    for (int i = 0; i < len2; i++) {
        result[index] = s2.str[i];
        index++;
    }

    result[totalLen] = '\0';

    return String(result);
}

int main() {
    String s1;
    String s2;
    String s3;

    s1.getString();
    s2.getString();
    s3 = concat(s1, s2);
    s3.print();

    return 0;
}