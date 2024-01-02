#include <iostream>
using namespace std;

// A B C
// A B C
// A B C

int main()
{
    int num, row = 1;
    cout << "Please Enter a Number : ";
    cin >> num;

    while (row <= num)
    {
        int col = 1;
        while (col <= num)
        {
            char ch = 'A' + col - 1;
            cout << ch;
            col++;
        }
        cout << endl;
        row++;
    }
}
