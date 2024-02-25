// References & Pointers
// There are 3 ways to pass C++ arguments to a function
// Call by Value
// Call by Reference with reference argument
// Call by Refernce with a pointer argument

#include <iostream>
using namespace std;

// Pass By Value
int square1(int n)
{
    cout << endl
         << "Address of n1 in square1(): " << &n << endl;
    n *= n;
    return n;
}

// Pass by Reference with Pointer Arguments
void square2(int *n)
{
    cout << "Address of n2 in square2(): " << n << endl;
    *n *= *n;
}

// Pass by Reference with Reference Arguments
void square3(int &n)
{
    cout << "Address of n3 in square3(): " << &n << endl;
    n *= n;
}

int main()
{
    // Call by value
    int n1 = 8;
    cout << "Address of n1 in main() : " << &n1 << endl;
    cout << "Square of n1 : " << square1(n1) << endl;
    cout << "No change in n1 : " << n1 << endl;

    // Call by Reference with Pointer Arguments
    int n2 = 8;
    cout << "Address of n2 in main() : " << &n2 << endl;
    square2(&n2);
    cout << "Square of n2  : " << n2 << endl;
    cout << "Change Reflected in n2 : " << n2 << endl;

    // Call by Reference with Reference Arguments
    int n3 = 8;
    cout << "Address of n3 in main() : " << &n3 << endl;
    square3(n3);
    cout << "Square of n3  : " << n3 << endl;
    cout << "Change Reflected n3 : " << n3 << endl;
}