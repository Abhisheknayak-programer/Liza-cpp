#include <iostream>
using namespace std;

int main()
{
    int rowSize1, colSize1, rowSize2, colSize2;
    cout << "Please Enter Row Size of Matrix 1: ";
    cin >> rowSize1;
    cout << endl
         << "Please Enter ColSize Size of Matrix 1: ";
    cin >> colSize1;

    cout << endl
         << "Please Enter Row Size of Matrix 2: ";
    cin >> rowSize2;
    cout << endl
         << "Please Enter ColSize Size of Matrix 2: ";
    cin >> colSize2;

    int arr1[rowSize1][colSize1];
    int arr2[rowSize2][colSize2];
    int ans[rowSize1][colSize1];

    // Taking Input for 1st Matrix
    cout << endl
         << "Enter the values for 1st Matrix" << endl;
    for (int i = 0; i < rowSize1; i++)
    {
        for (int j = 0; j < colSize1; j++)
        {
            cout << "Enter the value for the row & column : " << i << j << "  ";
            cin >> arr1[i][j];
        }
    }

    // Taking Input for 2st Matrix
    cout << endl
         << "Enter the values for 2st Matrix" << endl;
    for (int i = 0; i < rowSize2; i++)
    {
        for (int j = 0; j < colSize2; j++)
        {
            cout << "Enter the value for the row & column : " << i << j << "  ";
            cin >> arr2[i][j];
        }
    }

    // Operation
    for (int i = 0; i < rowSize1; i++)
    {
        for (int j = 0; j < colSize1; j++)
        {
            ans[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // ans[0][0] = arr1[0][0] + arr2[0][0]
    // ans[0][1] = arr1[0][1] + arr2[0][1]
    // ans[1][0] = arr1[1][0] + arr2[1][0]
    // ans[1][1] = arr1[1][1] + arr2[1][1]

    // Print Matrix 1
    cout << endl
         << "Printing Matrix 1 : " << endl;
    for (int i = 0; i < rowSize1; i++)
    {
        for (int j = 0; j < colSize1; j++)
        {
            cout << arr1[i][j] << "\t";
        }
        cout << endl;
    }

    // Print Matrix 2
    cout << "Printing Matrix 2 : " << endl;
    for (int i = 0; i < rowSize2; i++)
    {
        for (int j = 0; j < colSize2; j++)
        {
            cout << arr2[i][j] << "\t";
        }
        cout << endl;
    }

    // Print Answer Matrix
    cout << "Printing Answer Matrix : " << endl;
    for (int i = 0; i < rowSize1; i++)
    {
        for (int j = 0; j < colSize1; j++)
        {
            cout << ans[i][j] << "\t";
        }
        cout << endl;
    }
}