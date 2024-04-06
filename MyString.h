#ifndef HW_C_19_MYSTRING_H
#define HW_C_19_MYSTRING_H
#include <iostream>
using namespace std;

class MyString
{
    char* string;
    int size;
    static int countObl;
public:
    MyString();
    MyString(int s);
    MyString(char* string, int size);
    void setString(const char* string, int size);
    static char* getInputString();
    static int getCountObj();
    void show();
};

#endif

