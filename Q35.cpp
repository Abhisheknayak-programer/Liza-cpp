#include <iostream>
using namespace std;

bool checkIdentical(int arr1[2][2], int arr2[2][2], int colSize, int rowSize)
{
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            if (arr1[i][j] != arr2[i][j])
                return false;
        }
    }
    return true;
}

// DRY RUN
// arr1[0][0] != arr2[0][0]
// 1 != 1
// arr1[0][1] != arr2[0][1]
// 2 != 2
// arr1[1][0] != arr2[1][0]
// 3 != 3
// arr1[1][1] != arr2[1][1]
// 4 != 4

int main()
{
    int arr1[2][2] = {{1, 2}, {3, 4}};
    int arr2[2][2] = {{1, 2}, {3, 4}};

    if (checkIdentical(arr1, arr2, 2, 2))
    {
        cout << "Matrix is Identical";
    }
    else
    {
        cout << "Matrix is not Identical";
    }
}

// PSEUDOCODE : code but not in a proper syntax
// ALGOS : proper logic to solve a given problem