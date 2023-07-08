// Queue in c++
// queues are a type of container adaptor, specifically designed to operate in a FIFO context (first-in first-out), where elements are inserted into one end of the container and extracted from the other.
#include <iostream>
#include <queue>
using namespace std;
int main(void)
{
    queue<int> q;
    cout << "Is queue is empty => " << q.empty() << endl;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << "Is queue is empty => " << q.empty() << endl;
    cout << "Size of the queue is => " << q.size() << endl;
    cout << "Front element of the queue => " << q.front() << endl;
    q.pop();

    // emplace , swap
    queue<int> q2;
    q2.swap(q);
    while (!q2.empty())
    {
        cout << q2.front() << "\t";
        q2.pop();
    }
    cout << endl;
    return 0;
}