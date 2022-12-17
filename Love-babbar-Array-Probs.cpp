// #include <climits>
// #include <iostream>
// using namespace std;

// int getMax(int num[], int n) {
//   int max_i = INT_MIN;

//   for (int i = 0; i < n; i++) {

//     max_i = max(max_i, num[i]);

//     // if (num[i] > max){
//     //   max = num[i];
//     // }
//   }
//   return max_i;
// }

// int getMin(int num[], int n) {
//   int min_i = INT_MAX;

//   for (int i = 0; i < n; i++) {

//     min_i = min(min_i, num[i]);

//     // if (num[i] < min) {
//     //   min = num[i];
//     // }
//   }
//   return min_i;
// }

// // Homework Problem-1:
// int getSum(int num[], int n){
//   int sum=0;
//   for (int i=0; i<n; i++)
//     {
//       sum+=num[i];
//     }
//   return sum;
// }

// int main() {
//   int size;
//   cout << "Enter the size of the Array: ";
//   cin >> size;
//   // **Very Bad Practice**
//   // int arr[size];
//   // Better practice:
//   int arr[100];
//   cout << "\nEnter the Elements of the Array: \n";
//   for (int i = 0; i < size; i++) {
//     cin >> arr[i];
//   }

//   // cout << "\nMaximum value: " << getMax(arr, size);
//   // cout << "\nMinimum value: " << getMin(arr, size);

//   cout << "\nSum of Elements in the Array: " << getSum(arr, size);
//   return 0;
// }

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