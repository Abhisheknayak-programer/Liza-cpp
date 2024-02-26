// STL ---> Standard Template Library
// The Standard Template Library is a set of C++ Templates classes to provide common programming data structures and functions such as list, stacks, arrays, vector, algorithms etc.
// Containers, Functions, Algorithms, Iterators
// DRY - Do_not Repeat your_code [Functions]

// Sorting the array
#include <iostream>
#include <algorithm>
using namespace std;

// Syntax ---> sort(starting address, ending address)

int main()
{
    int arr[] = {21, 32, 42, 5, 6, 7};
    cout << "Begin : " << begin(arr) << endl;
    cout << "End : " << end(arr) << endl;
    sort(begin(arr), end(arr));

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}
