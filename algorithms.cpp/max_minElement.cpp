#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
    int arr[] = {3, 7, 2, 5, 6, 4, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    // max_element => Returns an iterator pointing to the element with the largest value in the range [first,last).
    // min_element => Returns an iterator pointing to the element with the smallest value in the range [first,last).

    // Using default comparison
    cout << "Largest element of the array => " << *max_element(arr, arr + size) << endl;
    cout << "Smallest element of the array => " << *min_element(arr, arr + size) << endl;

    
    return 0;
}