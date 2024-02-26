// Binary Search in a Array
#include <algorithm>
#include <iostream>
using namespace std;

// Syntax ---> binary_search(starting address, ending address, element to be searched)

int main()
{
    int arr[] = {21, 32, 42, 5, 6, 7};
    cout << binary_search(begin(arr), end(arr), 32);
}
