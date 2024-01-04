#include <iostream>
using namespace std;

// ARRAY INTRO
// Array is a Linear DataStructure where similar kind of datatypes are stored in contigious memory location
// Array is always fixed in length once declared but not vectors
//  0 1 2 3 4 ... n
// arrayname[index]  ===> Accessing a particular index

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}

int minFinder(int arr[], int size)
{
    int min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int first[10] = {4, 5, 6, 7, 7, 8, 89, 2};
    // cout << first;
    printArray(first, 8);

    cout << endl
         << "Min element in arr is : " << minFinder(first, 8);
}