#include <iostream>
using namespace std;

class A
{
public:
    int test = 90;

    class B
    {
    private:
        int num;

    public:
        void updateData(int n)
        {
            num = n;
        }

        void printData()
        {
            cout << "The Number is : " << num;
        }
    };

    void test()
    {
        cout << "The Test is : " << test;
    }
};

int main()
{
    A::B obj;

    obj.updateData(9);
    obj.printData();
}
