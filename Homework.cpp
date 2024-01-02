// Homework
// 1. Print the pattern
// 1
// 2 3
// 4 5 6
// 7 8 9 10

// 2. Print the pattern
// A
// B B
// C C C
// D D D D

// 2. Print the pattern
// A
// A B
// A B C
// A B C D

// 4. Find the output
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            cout << i << " " << j << endl;
        }
    }
}