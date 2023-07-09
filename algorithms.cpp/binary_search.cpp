// Binary Search in c++ stl
// Only works for sorted array
// Returns true if any element in the range [first,last) is equivalent to val, and false otherwise.
// Time complexity => O(logn)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool res = binary_search(arr, arr + size, 3);
    cout << "Element is present => " << res << endl;

    // ******** Lower bound ********
    // Returns an iterator pointing to the first element in the range [first,last) which does not compare less than val.
    // Time Complexity => O(logN)

    vector<int> vec = {10, 20, 30, 30, 30, 40, 50};
    auto it1 = lower_bound(vec.begin(), vec.end(), 30);
    auto it2 = lower_bound(vec.begin(), vec.end(), 35);

    cout << "lower_bound for element 30 at position : " << it1 - vec.begin() << endl;
    cout << "lower_bound for element 35 at position : " << it2 - vec.begin() << endl;

    // ******** Upper bound *******
    // It returns an iterator pointing to the first element in the range [first, last] that is greater than value.

    auto it3 = upper_bound(vec.begin(), vec.end(), 40);
    cout << "upper bound for element 40  at position : " << it3 - vec.begin() << endl;

    return 0;
}