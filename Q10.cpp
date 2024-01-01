#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i <= 5; i++)
    {
        cout << "Printing Top Loop " << i + 1 << endl;
        for (int j = 0; j <= 2; j++)
        {
            cout << "Printing Inner Loop " << j + 1 << endl;
        }
    }
}
