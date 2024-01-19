#include <iostream>
using namespace std;

// FIND 2nd MIN and 2nd Max from the array
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}

void BubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    printArr(arr, n);

    cout << "The second Min Value is : " << arr[1] << endl;
    cout << "The second Max Value is : " << arr[n - 2] << endl;
}

// 1 5 3 4 6
// 1 3 5 4 6
// 1 3 4 5 6

int main()
{
    int arr[5] = {5, 1, 3, 4, 6};
    BubbleSort(arr, 5);
}