#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void display(int arr[], int size);
int main(void)
{
    int arr[] = {20, 10, 5, 40, 30, 25, 100};
    int size = sizeof arr / sizeof arr[0];

    cout << "Element of the array before reversing are => " << endl;
    display(arr, size);

    reverse(arr, arr + size);
    cout << "Element of the array after reversing are => " << endl;
    display(arr, size);

    vector<int> vec = {5, 10, 35, 60, 70};
    cout << "Element of the vector before reversing => " << endl;
    for (auto it : vec)
    {
        cout << it << "\t";
    }
    cout << endl;
    reverse(vec.begin(), vec.end());
    cout << "Element of the vector after reversing => " << endl;
    for (auto it : vec)
    {
        cout << it << "\t";
    }
    cout << endl;
    return 0;
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}