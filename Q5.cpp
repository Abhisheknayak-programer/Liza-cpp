#include <iostream>
using namespace std;

int main()
{
    // Continue -> if condition satisfies then for that instance it will not be executed
    // Break-> Break the loop
    int num, i = 0;
    cout << "Please Enter a Number: ";
    cin >> num;

    while (i < num)
    {
        if (i == 7)
            break;
        else
            cout << i << endl;

        i++;
    }
}