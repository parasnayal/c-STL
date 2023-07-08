// inside the in int main we can define 10^6 array element (int ,double,char data type)
// inside the in int main we can define 10^7 array element (boolean data type)
// outside the in int main we can define 10^7 array element (int ,double,char data type)
// outside the in int main we can define 10^7 array element (boolean data type)

// Vectors are sequence containers representing arrays that can change in size.Just like arrays, vectors use contiguous storage locations for their elements, which means that their elements can also be accessed using offsets on regular pointers to its elements, and just as efficiently as in arrays. But unlike arrays, their size can change dynamically, with their storage being handled automatically by the container.

// Internally, vectors use a dynamically allocated array to store their elements. This array may need to be reallocated in order to grow in size when new elements are inserted, which implies allocating a new array and moving all elements to it. This is a relatively expensive task in terms of processing time, and thus, vectors do not reallocate each time an element is added to the container.

// vectors consume more memory in exchange for the ability to manage storage and grow dynamically in an efficient way.

#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> v);
int main(void)
{
    // vector<int>vec(4,10) => {10,10,10,10} => 
    vector<int> v1 = {10, 20, 30, 40, 50, 60};
    int arr[] = {100, 200, 30};
    // Modifiers
    // assign() is an STL in C++ which assigns new values to the vector elements by replacing old ones. It can also modify the size of the vector if necessary.

    // The syntax for assigning constant values:
    // v1.assign(int size , int value)

    vector<int> v;
    v.assign(7, 100);
    // display(v);

    // The syntax for assigning values from an array or list:
    // vectorname.assign(arr,arr+size)
    vector<int> v2;
    v2.assign(arr, arr + 2);
    // display(v2);

    // The syntax for modifying values from a vector
    v.assign(v.begin(), v.begin() + 3);
    // display(v);

    // push_back() function is used to push elements into a vector from the back. The new value is inserted into the vector at the end, after the current last element and the container size is increased by 1.

    // v1.push_back(70);
    // display(v1);

    // pop_back() function is used to pop or remove elements from a vector from the back. The value is removed from the vector from the end, and the container size is decreased by 1.
    // v1.pop_back();
    // display(v1);

    // ************** Insert **********
    // The return value of the C++ vector insert function is an iterator
    // Syntax 1 =>  vector_name.insert(position,val) .position is an iterator pointed toward the position where we want to add the data.
    vector<int> v3 = {5, 10, 15, 20, 25};
    display(v3);
    // v3.insert(v3.begin() + 2, 1000);
    // display(v3);

    // Syntax 2 => vector_name.insert(position, size, val) => size is the variable indication number of times the given value will be added to the vector
    // v3.insert(v3.begin()+4,3,200);
    // display(v3);

    // Syntax3 => vector_name.insert(position, iterator1, iterator2)
    v3.insert(v3.begin() + 3, v1.begin(), v1.end() - 5);
    // display(v3);
    cout << "Before clear => " << v3.size() << endl;

    // The clear() function is used to remove all the elements of the vector container, thus making it size 0.
    // v3.clear();
    cout << "After clear => " << v3.size() << endl;

    // erase() function is used to remove elements from a container from the specified position or range.
    // vector_name(iterator first , iterator second)

    // v1.erase(v1.begin());
    // v1.erase(v1.begin(),v1.begin()+2);
    // display(v1);

    // emplace => The vector::emplace() is an STL in C++ which extends the container by inserting a new element at the position. Reallocation happens only if there is a need for more space. Here the container size increases by one.

    // push_back and emplace_back identical but emplace_back take lesser time

    // ********** Iterators => begin , end , rbegin , rend ***********

    // ****** Capacity ********
    // size => Returns the number of elements in the vector.
    // capacity =>  The capacity of a vector is the total number of elements it can hold.
    vector<int> v4;
    for (int i = 0; i < 9; i++)
    {
        v4.push_back(i);
    }
    cout << "Size of v4 => " << v4.size() << endl;
    cout << "Capacity of v4 => " << v4.capacity() << endl;
    cout << v4.size() << endl;
    cout << v4.capacity() << endl;

    // Element access => at , front , back , data

    // Define 2d vector
    vector<vector<int>> vec2d = {{10, 20}, {30, 40}, {50, 60}};
    cout << vec2d[0][0] << endl;
    cout << vec2d[0][1] << endl;
    cout << vec2d[1][0] << endl;
    cout << vec2d[1][1] << endl;
    cout << vec2d[2][0] << endl;
    cout << vec2d[2][1] << endl;

    // Define 10*20
    vector<vector<int>> vec2(10, vector<int>(20));
    cout<<vec2[8][18]<<endl;
    return 0;
}
void display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\t";
    }
    cout << endl;
}