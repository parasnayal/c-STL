// Stack in c++ stl
// Stacks are a type of container adaptor, specifically designed to operate in a LIFO context (last-in first-out), where elements are inserted and extracted only from one end of the container.
#include <iostream>
#include <stack>
using namespace std;
int main(void)
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(15);
    s.push(30);

    cout << " stack is empty => " << s.empty() << endl;
    cout << "Size of the stack => " << s.size() << endl;
    cout << "Top element of the stack is => " << s.top() << endl;
    // s.pop();
    cout << "Top element of the stack is => " << s.top() << endl;
    cout << "Size of the stack => " << s.size() << endl;

    // emplace => Adds a new element at the top of the stack, above its current top element. This new element is constructed in place passing args as the arguments for its constructor.
    // s.emplace(100);
    cout << "Top element of the stack => " << s.top() << endl;

    stack<int>s2;
    // This function is used to swap the contents of one stack with another stack of same type but the size may vary => Time Complexity: O(1)
    s2.swap(s);
    while(!s2.empty()){
        cout << s2.top() << "\t";
        s2.pop();
    }
    return 0;
}