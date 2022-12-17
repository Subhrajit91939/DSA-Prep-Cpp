#include <climits>
#include <iostream>

using namespace std;

// Implementing Linear Search
bool search(int arr[], int n, int k) {
  bool ans;
  for (int j = 0; j < n; j++) {
    if (arr[j] == k) {
      ans = true;
      break;
    } else {
      ans = false;
    }
  }
  return ans;
}

int main() {
  int size, key, arr[100];
  cout << "\nEnter the size of the array: " << endl;
  cin >> size;

  cout << "\nEnter the array: \n";
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
  cout << "\nEnter the Key: ";
  cin >> key;

  bool ans = search(arr, size, key);
  if (ans) {
    cout << "\nKey is present in the Array.\n";
  } else {
    cout << "\nkey is absent in the Array.\n";
  }
}