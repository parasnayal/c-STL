// c++ stl array provides Random access iterators
#include <iostream>
#include <array>
using namespace std;
int main(void)
{
    // 1st way to initialize the array
    // array<int, 5> arr1{{10, 20, 30, 40, 50}};

    // 2nd way to initialize the array
    array<int, 5> arr1 = {10, 20, 30, 40, 50};

    // array<int,5>arr = {0} in this way array element at index 0 is initialize with 0 and all element contains 0 by default

    // array<int,5>arr = {1} in this way array element at index 0 is initialize with 1 and all element contains 0 by default

    // fill
    array<int, 3> arr2;
    arr2.fill(100);

    // Iterators => begin() , end() , rbegin() , rend()

    // begin()=> begin() function is used to return an iterator pointing to the first element of the array container. begin() function returns a bidirectional iterator to the first element of the container.

    cout << *(arr1.begin()) << endl;

    // ************** Iteration *************
    for (auto it = arr1.begin(); it != arr1.end(); it++)
    {
        cout << *it << "\t";
    }
    cout << endl;

    // end() => end() returns an iterator (biderectional) pointing to the past-the-end element in the array container.
    cout << *(arr1.end()) << endl;

    for (auto it = arr1.end() - 1; it >= arr1.begin(); it--)
    {
        cout << *it << "\t";
    }
    cout << endl;

    // rbegin() => is a built-in function in C++ STL which returns a reverse iterator pointing to the last element in the container.

    cout << *(arr1.rbegin()) << endl;

    for (auto it = arr1.rbegin(); it != arr1.rend(); it++)
    {
        cout << *it << "\t";
    }
    cout << endl;

    // rend() => is a built-in function in C++ STL which returns a reverse iterator pointing to the theoretical element right before the first element in the vector container.

    cout << *(arr1.rend()) << endl;

    for (auto it = arr1.rend() - 1; it >= arr1.rbegin(); it--)
    {
        cout << *it << "\t";
    }
    cout << endl;

    for (auto it : arr1)
    {
        cout << it << "\t";
    }
    cout << endl;

    // ********** Element access ************

    // at => Reference to the requested element.
    cout << "First element is => " << arr1.at(0) << endl;

    // front => reference to the first element
    cout << "First element is using front => " << arr1.front() << endl;

    // front => Reference to the last element
    cout << "last element is using front => " << arr1.back() << endl;
    
    return 0;
}