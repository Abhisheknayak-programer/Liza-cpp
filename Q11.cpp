#include <iostream>
using namespace std;

// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *

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
            cout << "*";
            j++;
        }
        i++;
        cout << endl;
    }
}
