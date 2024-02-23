#include <iostream>
using namespace std;

int main()
{

    int age = 21;

    // Ternary Operator
    // Syntax ---> condition ? true code : false code
    // age > 18 ? cout << "You can drive car" : cout << "You are not allowed to drive car";

    age < 18 ? cout << "You can't drive car" : age == 20 ? cout << "Liza you can drive car"
                                                         : cout << "You can drive car";

    // In case of Arrays
    int *arr = new int[10]; // Allocates Memory in the Heap
    delete[] arr;           // Deallocate the Heap Memory

    // In case of Pointers
    int *ptr = NULL;
    delete ptr; // Deleting the pointer

    // Using Multiple Pointer
    int *ptr1 = new int;
    int *ptr2 = new int(20);

    cout << "The value of ptr 1 is : " << *ptr1 << endl;
    cout << "The value of ptr 2 is : " << *ptr2 << endl;

    delete ptr1;
    delete ptr2;

    cout << "The value of ptr 1 is : " << *ptr1 << endl;
    cout << "The value of ptr 2 is : " << *ptr2 << endl;
}