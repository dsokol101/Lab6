#include "SimpleString.h"
#include <cstring> // for strlen, strcpy
#include <iostream> // for std::cout

int main() {
    // try out some c-string functions
    char str[20]="Hello";
    std::cout << "Length of str: " << strlen(str) << std::endl;
    char *str2 = new char[strlen(str) + 1]; // allocates enough space to
    // fit str including the null character
    strcpy(str2, str); // copy str into str2
    std::cout << "str2: " << str2 << std::endl;
    delete[] str2; // free the allocated memory

    SimpleString s; // default constructor
    std::cout << "s: ";
    s.print(); // should print empty string
    return 0;
}