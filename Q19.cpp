#include <iostream>
using namespace std;

// A B C
// D E F
// G H I

int main()
{
    int num, row = 1, start = 0;
    cout << "Please Enter a Number : ";
    cin >> num;

    while (row <= num)
    {
        int col = 1;
        while (col <= num)
        {
            char ch = 'A' + start;
            cout << ch;
            col++;
            start++;
        }
        cout << endl;
        row++;
    }
}
