#include <iostream>
using namespace std;

void test()
{
    int arr[3] = {10, 100, 190};
    int *ptr = &arr[0];

    for (int i = 0; i < 3; i++)
    {
        cout << "Value of ptr : " << ptr << endl;
        cout << "Value of *ptr : " << *ptr << endl;
        ptr++;
    }
}

int main()
{
    test();

    char a;
    char *b;
    char **c;
    a = 'g';
    b = &a;
    c = &b;
}
