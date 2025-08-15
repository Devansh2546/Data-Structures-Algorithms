#include <bits/stdc++.h>
using namespace std;

// standard template library in  c++

int main()
{
    // Paris
    // paris are the data structure which is used to store two values of different data types and same data types also .
    pair<int, string> p = {1, "Paris"};
    // P.first refers to the first element of the pair, and p.second refers to the second element.
    cout << "Pair: " << p.first << ", " << p.second << endl;

    pair<int, pair<int, int>> p1 = {1, {2, 3}};
    cout << "Nested Pair: " << p1.first << ", " << p1.second.first << ", " << p1.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << "Array of Pairs: " << arr[1].second << endl;

    // Vectors
    // vector is container which is dynamic in nature
    vector<int> v;
    v.push_back(10);    // Add element to the end of the vector
    v.emplace_back(20); // Add element to the end of the vector
    cout << "Vector: " << v[0] << ", " << v[1] << endl;

    v.pop_back(); // Remove the last element
    cout << "Vector after pop_back: " << v[0] << endl;
    cout << "Vector size after pop_back: " << v.size() << endl;

    vector<pair<int, int>> v1;
    v1.push_back({1, 2});
    v1.emplace_back(3, 4);
    cout << "Vector of Pairs: " << v1[0].first << ", " << v1[1].second << endl;

    vector<int> v2(5, 10); // Initialize vector with 5 elements, each of value 10
    vector<int> v3(v2);    // Copy constructor
    cout << "Vector v2: " << v2[0] << ", " << v2[1] << ", " << v2[2] << ", " << v2[3] << ", " << v2[4] << endl;
    cout << "Vector v3: " << v3[0] << ", " << v3[1] << ", " << v3[2] << ", " << v3[3] << ", " << v3[4] << endl;
    v3.clear(); // Clear the vector
    cout << "Vector v3 after clear: " << v3.size() << endl;

    // iterators in vector
    // Iterators are used to traverse through the elements of a container.
    vector<int> v4 = {1, 2, 3, 4, 5};
    vector<int>::iterator it = v4.begin(); // it points to the first element address of vector v4
    // to accsess value that point adreess we use *
    cout << "First element using iterator: " << *it << endl; // Dereference the iterator to get the value

    it++; // Move the iterator to the next element
    cout << "Second element using iterator: " << *it << endl;

    vector<int>::iterator it1 = v4.end();                          // it1 points to the end of the vector
    cout << "Last element using iterator: " << *(it1 - 1) << endl; // Dereference the last element

    // erase function in vector
    v4.erase(v4.begin() + 2); // Erase the third element
    v4.erase(v4.begin()); // Erase the first element
    cout << "Vector after erase: ";
    for (int i : v4)
    {
        cout << i << " ";
    }

    cout << endl;

    // insert function in vector

    v4.insert(v4.begin() + 1, 10); // Insert 10 at the second position
    v4.insert(v4.end(), 20);       // Insert 20 at the end
    v4.insert(v4.begin(), 30);     // Insert 30 at the beginning
    v4.insert(v4.begin() + 3, 2, 10); // Insert 10 twice at the third position
    cout << "Vector after insert: ";
    for (int i : v4)
    {
        cout << i << " ";
    }
    cout << endl;



    return 0;
}