// Create a matrix and Fill the matrix by taking user input and print it in a wave diagram.
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
    cout << "Initially Printing Matrix : " << endl;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << matrix[i][j] << "\t";
        }

        cout << endl;
    }

    // When Col Index is odd then bottom to top approach
    // When Col Index is even or 0 then top to bottom approach

    for (int col = 0; col < colSize; col++)
    {
        if (col % 2 == 1)
        {
            for (int row = rowSize - 1; row >= 0; row--)
            {
                cout << matrix[row][col] << "\t";
            }
        }
        else
        {
            for (int row = 0; row < rowSize; row++)
            {
                cout << matrix[row][col] << "\t";
            }
        }
    }
}
