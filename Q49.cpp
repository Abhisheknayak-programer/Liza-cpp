#include <iostream>
using namespace std;

class Student
{

public:
    int id;

    Student(int mark, int num = 10)
    {
        cout << "Mark + Num = " << num + mark << endl;
    }
};

void test(int a = 100)
{
    cout << "The Value of A is : " << a << endl;
}

int main()
{
    test();
    test(1111);

    Student s1(100, 100);
}