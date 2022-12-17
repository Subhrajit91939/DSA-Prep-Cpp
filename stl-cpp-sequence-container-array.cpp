// Standard Template Library(STL) C++
#include <iostream>
// 1. Sequence Container: Array
#include <array>

using namespace std;

int main() {
  int basicarray[3] = {1, 2, 3};

  // Intialising the Static array:
  // Syntax: array<datatype, size> array_name = {1, 2, ...}
  array<int, 4> a = {1, 2, 3, 4};

  // Getting the size fo the array:
  int size = a.size();

  // Printing the array:
  for (int i = 0; i < size; i++) {
    cout << a[i];
  }

  cout << "Element at 2nd Index" << a.at(2) << endl;
  cout << "Empty or Not" << a.empty() << endl;
  cout << "First Element" << a.front() << endl;
  cout << "Last Element" << a.back() << endl;

  return 0;
}