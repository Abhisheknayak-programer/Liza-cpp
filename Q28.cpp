#include <iostream>
using namespace std;

bool LinearSearch(int arr[], int size, int num)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            return true;
        }
    }
    return false;
}

void LinearSearchInd(int arr[], int size, int num)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            cout << "Number Found at Index : " << i << endl;
        }
    }
}

int main()
{
    int first[10] = {4, 5, 6, 7, 7, 8, 89, 2, 44, 404};
    int size = sizeof(first) / sizeof(int);
    if (LinearSearch(first, size, 414))
    {
        cout << "Number Found";
    }
    else
    {
        cout << "Number Not Found";
    }

    LinearSearchInd(first, size, 7);
}