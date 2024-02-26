// Reverse of a Array
#include <algorithm>
#include <iostream>
using namespace std;

// Syntax ---> reverse(starting address, ending address)

int main()
{
    int arr[] = {21, 32, 42, 5, 6, 7};
    reverse(begin(arr), end(arr));

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}
