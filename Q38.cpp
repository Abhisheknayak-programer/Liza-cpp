#include <iostream>
using namespace std;

// WAP to print the sum of each rows in the matrix

// 1 2 3 = 6
// 4 5 6 = 15
// 7 8 9 = 24

void printMatrix(int matrix[3][3], int rowSize, int colSize)
{
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

void matrixRowSum(int matrix[3][3], int rowSize, int colSize)
{
    for (int i = 0; i < rowSize; i++)
    {
        int sum = 0;
        for (int j = 0; j < colSize; j++)
        {
            sum = sum + matrix[i][j];
        }
        cout << "Sum of Row : " << i << " is " << sum << endl;
    }
}

void matrixColSum(int matrix[3][3], int rowSize, int colSize)
{
    for (int i = 0; i < rowSize; i++)
    {
        int sum = 0;
        for (int j = 0; j < colSize; j++)
        {
            sum = sum + matrix[j][i];
        }
        cout << "Sum of Column : " << i << " is " << sum << endl;
    }
}

int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printMatrix(matrix, 3, 3);
    matrixRowSum(matrix, 3, 3);
    matrixColSum(matrix, 3, 3);
}