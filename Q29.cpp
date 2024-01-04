#include <iostream>
using namespace std;

// WAP to search an element given by the user input it should be done with the function and the function should return the index of the next number
int LinearSearch(int arr[], int size, int num)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int first[10] = {4, 5, 6, 7, 7, 8, 89, 2, 44, 404};
    int size = sizeof(first) / sizeof(int);
    int num;
    cout << "Please Enter a Number : ";
    cin >> num;
    cout << LinearSearch(first, size, num);
}