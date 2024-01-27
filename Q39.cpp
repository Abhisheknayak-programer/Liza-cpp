//  Create a matrix and Fill the matrix by taking user input and find the largest & smallest row sum and column sum.
#include <iostream>
using namespace std;

int main()
{
    int rowSize, colSize;
    cout << "Enter Row Size : ";
    cin >> rowSize;

    cout << endl
         << "Enter Col Size : ";
    cin >> colSize;

    int matrix[rowSize][colSize];

    // Taking User Input and Filling the matrix
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << "Enter Data for row:column " << i << j << "\t";
            cin >> matrix[i][j];
        }
    }

    // Print Matrix
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << matrix[i][j] << "\t";
        }

        cout << endl;
    }

    // Largest and Smallest Row Sum
    int MaxRowSum = -100000, MinRowSum = 100000;
    for (int i = 0; i < rowSize; i++)
    {
        int sum = 0;
        for (int j = 0; j < colSize; j++)
        {
            sum = sum + matrix[i][j];
        }
        if (sum > MaxRowSum)
            MaxRowSum = sum;

        if (sum < MinRowSum)
            MinRowSum = sum;
    }

    cout << "Max Row Sum is : " << MaxRowSum << " and Min Row Sum is : " << MinRowSum;

    // Largest and Smallest Column Sum
    int MaxColSum = -100000, MinColSum = 100000;
    for (int i = 0; i < colSize; i++)
    {
        int sum = 0;
        for (int j = 0; j < rowSize; j++)
        {
            sum = sum + matrix[j][i];
        }
        if (sum > MaxColSum)
            MaxColSum = sum;

        if (sum < MinColSum)
            MinColSum = sum;
    }

    cout << endl
         << "Max Col Sum is : " << MaxColSum << " and Min Col Sum is : " << MinColSum;
}