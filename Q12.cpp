#include <iostream>
using namespace std;

// 1 1 1
// 2 2 2
// 3 3 3

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
            cout << i;
            j++;
        }
        i++;
        cout << endl;
    }
}