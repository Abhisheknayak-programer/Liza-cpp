// It is a type of the array which is allocated dynamically.
// When a new vector is made at that time the size of the vector is 0 and capacity of the vector is also 0.
// Size means currently upto which index vector is filled.
// Capacity means maximum amount of indexes present to hold the data.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Syntax --> vector <datatype> vectorname;
    vector<int> v;

    cout << "The capacity of the vector is : " << v.capacity() << endl;
    v.push_back(1); // This is how we add elements inside the vector
    cout << "The capacity of the vector is : " << v.capacity() << endl;
    v.push_back(2);
    cout << "The capacity of the vector is : " << v.capacity() << endl;
    v.push_back(3);
    cout << "The capacity of the vector is : " << v.capacity() << " and size is : " << v.size() << endl;
    v.push_back(13);
    v.push_back(23);
    cout << "The capacity of the vector is : " << v.capacity() << " and size is : " << v.size() << endl;

    // Printing the vector
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    // Access any element in the vector
    cout << "\nThe element present inside index 1 is : " << v.at(1) << endl;

    // Check whether the vector is empty or not
    cout << "vector v is Empty or not : " << v.empty() << endl;

    // Get the first element of the vector
    cout << "The first element of the vector is : " << v.front() << endl;

    // Get the last element of the vector
    cout << "The last element of the vector is : " << v.back() << endl;

    // Remove the element from the vector
    v.pop_back();

    // Printing the vector
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // Clear the values present in the index
    v.clear();
    cout << "The capacity of the vector is : " << v.capacity() << " and size is : " << v.size() << endl;

    // Initialising the vector with a number
    vector<int> a(10, 2567);
    // fill(a.begin(), a.end(), 2567); //Alternative

    // Printing the vector
    for (int x : a)
        cout << x << " ";

    // Copy a vector values into anather vector
    cout << endl;

    vector<int> liza(a);
    // Printing the vector
    for (int x : a)
        cout << x << " ";
}