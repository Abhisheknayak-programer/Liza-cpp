#include <iostream>
using namespace std;

void PrintMatrix(int arr[3][3], int rowSize, int colSize)
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

// [[3, 5, 6], [1,2,4], [6,6,6]]

// MATRIX
int main()
{
    int arr[3][3] = {{3, 5, 6}, {1, 2, 4}, {6, 6, 6}};
    PrintMatrix(arr, 3, 3);
}