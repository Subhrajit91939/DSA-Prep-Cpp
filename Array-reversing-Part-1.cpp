#include <climits>
#include <iostream>

using namespace std;

// Implementing Array Reversing
int main() {
  int size, arr[100], revarr[100];
  cout << "\nEnter the size of the array: " << endl;
  cin >> size;

  // cout << "\nEnter the array: \n";
  // for (int i = 0; i < size; i++) {
  //   cin >> arr[i];
  // }

  // Version-1: Printing out the Array in Reverse order:
  // cout << "\nReversed array: \n";
  // for (int i = (size - 1); i >= 0; i--) {
  //   cout << arr[i] << " ";
  // }

  // Version-2: creating the reverse array while taking the input:
  cout << "\nEnter the array: \n";
  for (int i = 0, j = (size - 1); (i < size), (j >= 0); i++, j--) {
    cin >> arr[i];
    revarr[j] = arr[i];
  }
  cout << "\nReversed Array: \n";
  for (int i = 0; i < size; i++) {
    cout << revarr[i] << " ";
  }
}