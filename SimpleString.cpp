#include "SimpleString.h"
#include <cstring> // for strlen, strcpy
// Constructor
SimpleString::SimpleString(const char *str)
{
}
// Rule of three: Constructor, Copy constructor, Destructor
// (more modern: rule of five: also has: Move constructor, Move assignment operator)
// Copy constructor
// Copy assignment operator
// Destructor

// Utility method
void SimpleString::print() const
{
    std::cout << data << std::endl;
}
