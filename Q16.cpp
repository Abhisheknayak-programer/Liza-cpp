#include <iostream>
using namespace std;

// 3 2 1
// 3 2 1
// 3 2 1

int main()
{
    int num, i = 1;
    cout << "Please Enter a Number : ";
    cin >> num;

    while (i <= num)
    {
        int j = num;
        while (j > 0)
        {
            cout << j;
            j--;
        }
        i++;
        cout << endl;
    }
}