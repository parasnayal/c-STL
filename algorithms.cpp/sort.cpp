// Sorting alogorithm
// The sort function in C++ is a part of STL library of C++. The sort() function is unstable while the function stable_sort() is stable but it is faster.

// Syntax => 1 => void sort (RandomAccessIterator first, RandomAccessIterator last);

// 2 => void sort (RandomAccessIterator first, RandomAccessIterator last, Compare comp);
// ====> comp - It is user defined binary predicate function which takes two arguments of same datatype as elements of the array/vector and returns the true or false after comparison.

// 3 => sort data in descending order => void sort (RandomAccessIterator first, RandomAccessIterator last, greater<data_type>());

// greater<data_type> - It is used to sort the array/vector in decreasing order. It is a pre-defined function with data_type same as the elements of the given container.

// The sort function in C++ uses the IntroSort internally which is a kind of hybrid sort. IntroSort is a combination of Quick Sort, Heap Sort, and Insertion Sort.

// Time complexity => O(n*logn)


//  partial_sort() function which is also used to perform the sorting operation. Unlike sort function in C++ which is used to sort the entire array we use the partial sort function to sort partial array.
// void partial_sort (RandomAccessIterator first, RandomAccessIterator middle, RandomAccessIterator last);

#include <iostream>
#include <algorithm>
using namespace std;
void display(int arr[], int size);
bool customFunction(int a, int b);
int main(void)
{
    int arr[] = {20, 10, 5, 40, 30, 25, 100};
    int size = sizeof arr / sizeof arr[0];

    cout << "Element of the array before sorting are => " << endl;
    display(arr, size);

    // ******* using sort *********

    // sort(arr, arr + size);

    // cout << "Element of the array after sorting are => " << endl;
    // display(arr, size);

    // ****** To sort data in descending order ********

    // sort(arr, arr + size, greater<int>());

    // cout << "Element of the array after sorting are => " << endl;
    // display(arr, size);

    // ***** To sort data with custom function *******
     sort(arr, arr + size, customFunction);

    cout << "Element of the array after sorting are => " << endl;
    display(arr, size);
    return 0;
}
bool customFunction(int a, int b)
{
    return a > b;
}
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}