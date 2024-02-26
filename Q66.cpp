// Accumulator in STL
#include <algorithm>
#include <numeric>
#include <iostream>
using namespace std;

// Syntax ---> accumulate(starting address, ending address. initial value)

int main()
{
    int arr[] = {21, 32, 42, 5, 6, 7};
    cout << "Sum : " << accumulate(begin(arr), end(arr), 0) << endl;
}