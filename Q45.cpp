// WAP to add the functions outside the classes
#include <iostream>
using namespace std;

class person
{
public:
    string name = "abhishek";

private:
    int num;

private:
    void test()
    {
        cout << "Testing private function" << endl;
    }

public:
    void print(int a)
    {
        num = a;
        cout << "Number is : " << num << endl;
        test();
    }

    void example();
    int add(int a, int b);
};

// Syntax of Resolution Operator
// return_type classname :: function

void person::example()
{
    cout << "Example";
}

int person::add(int a, int b)
{
    cout << name;
    return a + b;
}

int main()
{
    person p;
    p.print(45);
    // p.test(); // ERROR
    // cout << p.num; // ERROR

    p.example();
    cout << endl
         << p.add(2, 3);
}