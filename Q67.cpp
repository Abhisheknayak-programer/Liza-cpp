// Counter in STL
#include <algorithm>
#include <iostream>
using namespace std;

// Syntax ---> count(starting address, ending address, counting_matched_number)

int main()
{
    int arr[] = {21, 5, 32, 42, 5, 6, 7, 5, 5};
    cout << "Count : " << count(begin(arr), end(arr), 5) << endl;
}