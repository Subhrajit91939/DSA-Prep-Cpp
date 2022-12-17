// Standard Template Library(STL) C++
#include <iostream>
// 2. Sequence Container: Vector
// Dynamic Array: Size of the Array can be changed easily.
#include <vector>

using namespace std;

int main() {
  // Intialising the Dynamic array/Vector:
  // Syntax: vector<datatype> vector_name
  vector<int> v;

  //  vector<int> a(5,1): 5 = Size of the vector; 1 = All the elements of the
  //  vector gets initialized with 1.

  // Create a copy of the vector v:
  vector<int> last(v);

  // Getting the Capacity of the vector:
  cout << "Capacity: " << v.capacity() << endl;
  // Capacity: 0

  // Vector Increases the size of the array by 2X.

  // push_back: inserts the value inside the array at the end.
  v.push_back(1);
  cout << "Capacity: " << v.capacity() << endl;
  // Capacity: 1
  v.push_back(2);
  cout << "Capacity: " << v.capacity() << endl;
  // Capacity: 2
  v.push_back(3);
  cout << "Capacity: " << v.capacity() << " "
       << "Size: " << v.size() << endl;
  // Capacity: 4 Size: 3

  // Printing the Vector:
  for (int i : v) {
    cout << i << " ";
  }
  cout << endl;

  // Printing the Vector before pop_back:
  cout << "Before pop_back" << endl;
  for (int i : v) {
    cout << i << " ";
  }
  cout << endl;

  // pop_back(): removes the last element in the vector.
  v.pop_back();
  // Printing the Vector:
  cout << "After pop_back" << endl;
  for (int i : v) {
    cout << i << " ";
  }
  cout << endl;

  cout << "Element at 1st Index: " << v.at(1) << endl;

  // First element in the vector.
  cout << v.front() << endl;
  // Last element in the vector.
  cout << v.back() << endl;

  // ***After clear operation vector's size=0, but capacity will not be zero.***
  // Capacity Before Clearing
  cout << "Capacity: " << v.capacity() << " "
       << "Size: " << v.size() << endl;
  // Capacity: 4 Size: 2

  v.clear();
  // Capacity after Ckearing
  cout << "Capacity: " << v.capacity() << " "
       << "Size: " << v.size() << endl;
  // Capacity: 4 Size: 0

  return 0;
}