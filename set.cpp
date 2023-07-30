// Sets are a type of associative container in which each element has to be unique because the value of the element identifies it. The values are stored in a specific sorted order i.e. either ascending or descending.

// The value of the elements in a set cannot be modified once in the container (the elements are always const), but they can be inserted or removed from the container.

// set containers are generally slower than unordered_set containers to access individual elements by their key, but they allow the direct iteration on subsets based on their order.

// Sets are typically implemented as binary search trees.

// This is ordered set.

#include <iostream>
#include <set>
using namespace std;
int main(void)
{
    set<int> st;

    // Insert => O(logn)
    st.insert(10);
    st.insert(5);
    st.insert(1);
    st.insert(100);
    st.insert(50);

    for (auto it : st)
    {
        cout << it << "\t";
    }
    cout << endl;

    // For the first version (erase(position)), amortized constant.
    // For the second version (erase(val)), logarithmic in container size.
    // For the last version (erase(first,last)), linear in the distance between first and last.
    // St.erase(state Iterator, last Iterator)
    // st.erase(st.begin());

    for (auto it : st)
    {
        cout << it << "\t";
    }
    cout << endl;

    // St.erase(10)

    // find => Searches the container for an element equivalent to val and returns an iterator to it if found, otherwise it returns an iterator to set::end
    // An iterator to the element, if val is found,
    // Time Complexity => O(logn)
    cout << *st.find(10) << endl;

    cout << st.size() << endl;
    return 0;
}