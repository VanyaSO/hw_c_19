#include <iostream>
#include "MyString.h"
using namespace std;

int MyString::countObl = 0;

int main() {
    MyString str1;

    MyString str2(12);
    str2.setString("Hi str2", 7);
    str2.show();

    cout << "Enter string:" << endl;
    char* str = MyString::getInputString();
    MyString str3(str, strlen(str));
    delete[] str;
    str3.show();

    cout << "Number of lines: " << MyString::getCountObj();

    return 0;
}