#include <iostream>
using namespace std;

// 1 2 3
// 1 2 3
// 1 2 3

int main()
{
    int num, i = 1;
    cout << "Please Enter a Number: ";
    cin >> num;

    while (i <= num)
    {
        int j = 1;
        while (j <= num)
        {
            cout << j;
            j++;
        }
        i++;
        cout << endl;
    }
}