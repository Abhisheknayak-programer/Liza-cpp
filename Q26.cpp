#include <iostream>
using namespace std;

void isPrimeNumber(int num)
{
    int count = 0;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            count++;
    }

    if (count >= 1)
        cout << "Not Prime";
    else
        cout << "Prime";
}

int main()
{
    int num;
    cout << "Please Enter a Number : ";
    cin >> num;
    isPrimeNumber(num);
}