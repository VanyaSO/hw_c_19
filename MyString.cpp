#include "MyString.h"
#include <cstring>

MyString::MyString(char* string, int size) {
    if (size > 0)
    {
        this->size = size;
        this->string = new char[this->size+1];
        this->string[this->size] = '\0';
        countObl++;

        if (string != nullptr)
        {
            int sizeNew = strlen(string);
            this->string = new char[sizeNew + 1];
            strcpy(this->string, string);
        }
    }
}

MyString::MyString():MyString( nullptr, 80){};

MyString::MyString(int size):MyString( nullptr, size){}

void MyString::setString(const char* string, int size) {
    if (this->string != nullptr)
    {
        delete[] this->string;
    }

    this->size = size;
    this->string = new char[this->size+1];
    strcpy(this->string, string);

}

char* MyString::getInputString() {
    char* newString = new char[255];
    cin.getline(newString, INT64_MAX);
    return newString;
}

int MyString::getCountObj()
{
    return countObl;
}

void MyString::show() {
    cout << this->string << endl << endl;
}


