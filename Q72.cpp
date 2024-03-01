// Queue is also known as FIFO [First In First Out]
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> s;
    s.push("Abhishek");
    s.push("Nayak");

    // Get the top element of the stack
    cout << "The top element of the stack is : " << s.front() << endl;

    // Remove the top element from the stack
    s.pop();
    cout << "The top element of the stack is : " << s.back() << endl;

    // Check size of the stack
    cout << "The size of the stack is : " << s.size() << endl;

    // Empty or not
    cout << "The stack s is empty or not : " << s.empty() << endl;
}