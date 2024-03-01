#include <iostream>
#include <array>
using namespace std;

int main()
{
    // Syntax ---> array<datatype, size> array_name = {comma seprated values};
    array<int, 4> a = {1, 2, 3, 4};

    // Find the size of the array using size function
    int size = a.size();
    cout << "The size of the array is : " << size << endl;

    // Printing the array
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    // Access any element in the array
    cout << "\nThe element present inside index 1 is : " << a.at(1) << endl;

    // Check whether the array is empty or not
    cout << "a is Empty or not : " << a.empty() << endl;

    // Get the first element of the array
    cout << "The first element of the array is : " << a.front() << endl;

    // Get the last element of the array
    cout << "The last element of the array is : " << a.back() << endl;
}