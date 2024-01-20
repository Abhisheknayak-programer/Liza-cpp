#include <iostream>
using namespace std;
#include <algorithm>

void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}

int main()
{
    int n;
    cout << "Enter the Max length of array : ";
    cin >> n;
    cout << endl;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value for the element in the Index :" << i << endl;
        cin >> arr[i];
    }

    cout << "Printing Before Sorting : " << endl;
    PrintArray(arr, n);
    sort(arr, arr + n);
    cout << "Printing After Sorting : " << endl;
    PrintArray(arr, n);
}
