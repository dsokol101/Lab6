Lab 6 -- SimpleString class

The SimpleString class has a pointer in it and thus needs special member functions.

In this lab you will code:

1. constructor
2. destructor
3. copy constructor
4. operator =

The key difference between this class and the SimpleVector class that we learned in class is that you may use the C-string library to copy the parameter string into the receiver object.

Be sure to always add 1 to the memory allocation so that 
you have space for the null terminator '\0' 