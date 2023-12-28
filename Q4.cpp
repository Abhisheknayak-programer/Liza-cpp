#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0, i = 1;
    cout << "Please Enter a Number : ";
    cin >> num;

    while (i <= num)
    {
        sum = sum + i;
        i++;
    }

    cout << "The sum of 1 to " << num << " is : " << sum << endl;
}

// Homework
// 1. Write a program where you will take the input of any number from the user and
//  write multiplication table of that number using while loop