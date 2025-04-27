#ifndef SIMPLESTRING_H
#define SIMPLESTRING_H
#include <iostream> // for std::cout

class SimpleString
{
private:
    char *data;

public:
    // Constructor
    SimpleString(const char *str = "");

    // Copy constructor
    SimpleString(const SimpleString &other);

    // Copy assignment operator
    SimpleString &operator=(const SimpleString &other);

    // Destructor
    ~SimpleString();

    // Utility method
    void print() const;

    // this is for testing 
    const char *c_str() const
    {
        return data;
    }
};

#endif