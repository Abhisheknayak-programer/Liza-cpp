// Stack is also known as LIFO [Last In First Out]
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("Abhishek");
    s.push("Nayak");

    // Get the top element of the stack
    cout << "The top element of the stack is : " << s.top() << endl;

    // Remove the top element from the stack
    s.pop();
    cout << "The top element of the stack is : " << s.top() << endl;

    // Check size of the stack
    cout << "The size of the stack is : " << s.size() << endl;

    // Empty or not
    cout << "The stack s is empty or not : " << s.empty() << endl;
}