#include <climits>
#include <iostream>

using namespace std;

// Love Babbar-Homework Problem-1
// Function for Swaping alternate numbers in the Array
void SwapAlt(int arr[], int size) {
  for (int i = 0; i < (size - 1); i += 2) {
    swap(arr[i], arr[i + 1]);
    // temp = arr[i];
    // arr[i] = arr[i+1];
    // arr[i+1] = temp;
  }
}

// Function for Printing the Array
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

// Implementing Array Reversing
int main() {
  int arr1[6] = {1, -3, 4, 5, 8, 9};
  int arr2[5] = {0, 2, 5, 7, 9};

  SwapAlt(arr1, 6);
  SwapAlt(arr2, 5);

  printArray(arr1, 6);
  printArray(arr2, 5);

  return 0;
}