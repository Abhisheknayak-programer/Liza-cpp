// Pointer
// Pointer are symbolic representations of address.
// They enable programs to stimulate call by reference as well as to create and manipulate dynamic data structures.

// Syntax ---> datatype * variable_name;

#include <iostream>
using namespace std;

void test()
{
    int var = 20;
    int *ptr;
    ptr = &var;

    cout << "Value of var = " << var << endl;
    cout << "Value of ptr = " << ptr << endl;
    cout << "Value of *ptr = " << *ptr << endl;
}

int main()
{
    test();
}
