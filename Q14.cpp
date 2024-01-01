#include <iostream>
using namespace std;

// 1 2 3
// 4 5 6
// 7 8 9

int main()
{
    int num, i = 1, count = 1;
    cout << "Please Enter a Number: ";
    cin >> num;

    while (i <= num)
    {
        int j = 1;
        while (j <= num)
        {
            cout << count;
            j++;
            count++;
        }
        i++;
        cout << endl;
    }
}