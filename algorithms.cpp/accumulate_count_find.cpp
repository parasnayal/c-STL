// The C++ accumulate() function calculates the sum of numerical values under a certain range. It can also be used to effectively iterate and compute the sum of an entire array or a vector with ease.

// accumulate(startRange, endRange, initialValue, functionToCall)

// count() returns the number of occurrences of an element in a given range. Returns the number of elements in the range [first, last) that compare equal to val.Time complexity: O(n)

// find() in C++ is a function that helps to search an element and returns the first occurrence of the element searched inside a specified range.find() function in C++ uses ==(Comparison operator) for every individual comparison between elements and values which is being searched.The find() function in C++ returns the iterator to the first element that refers to the value we want to search inside a particular range.Time complexity => O(n)

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>
using namespace std;
int main(void)
{
    vector<int> vec = {10, 20, 30, 40};

    int sum = accumulate(vec.begin(), vec.end(), 0);

    cout << "Sum => " << sum << endl;

    int arr[] = {3, 2, 1, 3, 3, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Number of times 3 appears => " << count(arr, arr + n, 3) << endl;

    string str = "geeksforgeeks";

    cout << "Number of times 'e' appears : "
         << count(str.begin(), str.end(), 'e') << endl;

    auto index = find(vec.begin(), vec.end(), 30);
    cout << "Index of the element is => " << index - vec.begin() << endl;

    return 0;
}