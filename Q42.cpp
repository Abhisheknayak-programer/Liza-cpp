// Linear Search - Go to every element in the array to search for a specific number [Here in linear search the array elements are arranged in any order as order does not matters]
// Binary Search - [Order Matters, Ascending Order]

// 1 2 3 4 5 6 7 8 9 10 11 12   target = 5
// 1 2 3 4 5 target = 5
// 4 5 target = 5
// 5 target = 5 == true

// Linear Search is O(n) Time Complexity
// Binary Search is O(logn) Time Complexity

#include <iostream>
using namespace std;

// 6 9 12 15 18
// low = 0, high = 4, mid = (0 + 4)/2 = 2
// 12 == 9 = false
// 12 > 9 = true
// high = 2 - 1 = 1

// 6 9 12 15 18
// low = 0, high = 1
// mid = (0 + 1) / 2 = 0
// 6 == 9 = false
// 6 > 9 = false
// low = (0 + 1) = 1

// 6 9 12 15 18
// low = 1, high = 1, mid = (low + high) / 2 = 1
// 9 == 9 = true
// return 1

int BinarySearch(int arr[], int size, int target)
{
    int low = 0, high = size - 1, mid;
    mid = (low + high) / 2;
    while (low <= high)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
        mid = (low + high) / 2;
    }
    return -1;
}

int main()
{
    int arr[5] = {6, 9, 12, 15, 18};
    cout << "Index of 9 is " << BinarySearch(arr, 5, 9) << endl;
}