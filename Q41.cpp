// Wap to find the squares of each element inside the matrix and store it inside ans matrix.

#include <iostream>
using namespace std;

void printMatrix(int ans[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << ans[i][j] << "\t";
        }

        cout << endl;
    }
}

int main()
{

    int matrix[2][2] = {{1, 2}, {3, 4}};
    int ans[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            ans[i][j] = matrix[i][j] * matrix[i][j];
        }
    }

    printMatrix(ans);
}

// ans[0][0] = matrix[0][0] * matrix[0][0] === 1
// ans[0][0] = 1 * 1 === 1

// ans[0][1] = matrix[0][1] * matrix[0][1] === 4
// ans[0][1] = 2 * 2 === 4