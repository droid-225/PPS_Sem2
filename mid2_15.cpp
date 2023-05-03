#include <iostream>
#include <cstring>
using namespace std;

class String{ 
    private:
        char* str;

    public:
    String() : str(new char[1]) {
        str[0] = '\0';
    }

    String(const char* string) {
        str = new char[strlen(string) + 1];
        strcpy(str, string);
    }

    String(const String& x) {
        str = new char[strlen(x.str) + 1];
        strcpy(str, x.str);
    }

    ~String() {
        delete[] str;
    }

    String operator+(const String& y) const {
        char* newStr = new char[strlen(str) + strlen(y.str) + 1];
        strcpy(newStr, str);
        strcat(newStr, y.str);

        String result(newStr);
        delete[] newStr;

        return result;
    }

    void print() const {
        cout << str << endl;
    }
};

int main() {
    String s1("Hello ");
    String s2("World!");
    String s3 = s1 + s2;
    s3.print();
}

