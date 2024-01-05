#include <iostream>
using namespace std;

void reverseArr(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// Index - 0, 4
// Elements - 78, 5
// Elements - 5, 78

// Index - 1, 3
// Elements - 44, 345
// Elements - 345, 44

// Index - 2, 2
// Elements - 53, 53
// Elements - 53, 53

// Index - 3, 1 [Loop Ended due to condition not satisfied]

int main()
{
    int arr[5] = {78,
                  44,
                  53,
                  345,
                  5};

    reverseArr(arr, 5);
}