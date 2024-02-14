#include <iostream>
using namespace std;

class Student
{

public:
    int id;

    void updateId(int a)
    {
        id = a;
    }

    void printId()
    {
        cout << "The Id of Student is : " << id << endl;
    }
};

int main()
{
    Student s1;
    s1.updateId(10);
    s1.printId();

    Student s2(s1);
    s2.printId();
}