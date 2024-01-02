#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 15; i += 2)
    {
        cout << i << " ";
        if (1 & i)
        {
            continue;
        }
        i++;
    }
}

// OUTPUT -> 0 3 5 7 9 11 13 15