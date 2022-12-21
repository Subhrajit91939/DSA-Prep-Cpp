#include <iostream>
using namespace std;

// Binary Search Implementation:
int binary_search(int arr[], int size, int key){
  int start = 0;
  int end = (size - 1);
  int mid = ((start + end)/2);

  while(start <= end){
    if (arr[mid] == key){
      return mid;
    }
    else if (arr[mid] > key){
      end = (mid-1);
    }
    else if (arr[mid] < key){
      start = (mid+1);
    }
    mid = ((start + end)/2);
  }
  return -1;
}  


int main(){
  int even[6] = {2, 4, 6, 8, 12, 18};
  int odd[5] = {3, 8, 11, 12, 16};
  int key;

  cout << "Enter the Key: ";
  cin >> key;

  int even_pos = binary_search(even, 6, key);
  cout << "Position of " << key << " in the Even Array  is "<< even_pos << endl;
  
  int odd_pos = binary_search(odd, 5, key);
  cout << "Position of " << key << " in the Odd Array is "<< odd_pos << endl; 
  return 0;
}