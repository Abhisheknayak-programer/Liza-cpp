#include <iostream>
using namespace std;

class School
{
public:
    int classes;

    // Default constructor
    School()
    {
        cout << "No of Classes is 10";
    }

    // Parametrized Constructor
    School(int Num)
    {
        cout << "No of Classes is " << Num;
    }
};

int main()
{
    School s1(100); // Creating a Object for Parametrized Constructor
}