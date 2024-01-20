#include <iostream>
using namespace std;

void PrintMatrix(int arr[4][4], int rowSize, int colSize)
{
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int rowSize, colSize;

    cout << "Please Enter Row Size : ";
    cin >> rowSize;
    cout << endl
         << "Please Enter ColSize Size : ";
    cin >> colSize;

    int arr[rowSize][colSize];

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cin >> arr[i][j];
        }
    }

    // PrintMatrix(arr, rowSize, colSize);

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}