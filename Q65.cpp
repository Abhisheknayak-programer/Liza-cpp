// Max and Min Element in Array
#include <algorithm>
#include <iostream>
using namespace std;

// Syntax ---> *max_element(starting address, ending address)
// Syntax ---> *min_element(starting address, ending address)

int main()
{
    int arr[] = {21, 32, 42, 5, 6, 7};
    cout << "Max Element is : " << *max_element(begin(arr), end(arr)) << endl;
    cout << "Min Element is : " << *min_element(begin(arr), end(arr)) << endl;
}
