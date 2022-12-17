// Standard Template Library(STL) C++
#include <iostream>
// 2. Sequence Container: Deque
// Deque: Insertion and Deletion can happen from both front and back.
#include <deque>

using namespace std;

int main() {
  // Intialising the Deque:
  deque<int> d;

  // Inserting 1 from the back:
  d.push_back(1);
  // Inserting 2 from the front:
  d.push_front(2);
  for (int i : d) {
    cout << i << " ";
  }
  cout << endl;
  // deleting from the back:
  // d.pop_back();
  // for (int i : d) {
  //   cout << i << " ";
  // }

  cout << "Print the First Index Element: " << d.at(1) << endl;

  cout << "Front: " << d.front() << endl;
  cout << "Back: " << d.back() << endl;

  cout << "Empty (or) Not: " << d.empty() << endl;

  cout << "Size (Before Erasing): " << d.size() << endl;

  // Deleting the First Element (limits are must for erasing an element**)
  d.erase(d.begin(), d.begin() + 1);

  cout << "Size (After Erasing): " << d.size() << endl;

  for (int i : d) {
    cout << i << " ";
  }
  return 0;
}