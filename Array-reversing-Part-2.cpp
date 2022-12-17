#include <climits>
#include <iostream>

using namespace std;

// Function for reversing the Array
void reverse(int arr[], int size){
  int start = 0;
  int end = (size-1);

  while(start <= end){
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}


// Function for Printing the Array
void printArray(int arr[], int size){
  for (int i = 0; i<size; i++){
    cout << arr[i] << " ";
  }
  cout << "\n";
}

// Implementing Array Reversing
int main() {
  int arr1[6] = {1, -3, 4, 5, 8, 9};
  int arr2[5] = {0, 2, 5, 7, 9};

  reverse(arr1, 6);
  reverse(arr2, 5);

  printArray(arr1, 6);
  printArray(arr2, 5);
  
  return 0;
}