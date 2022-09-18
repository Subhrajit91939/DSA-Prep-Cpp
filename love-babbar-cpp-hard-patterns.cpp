/*
Love Babbar Patterns C++:
https://youtu.be/dr-pLeJBr38
*/
#include <iostream>
using namespace std;

// Pattern-1:
int main() {
  int n;
  cout << "Enter the value of N: ";
  cin >> n;

  int i = 1;
  while (i <= n) {
    // Print Space Traingle
    int space = (n - i);
    while (space) {
      cout << "  ";
      space--;
    }

    // Printing the First Triangle:
    int j = 1;
    while (j <= i) {
      cout << j << " ";
      j++;
    }

    // Printing the Second Triangle from the Second row
    int start = i - 1;
    while (start) {
      cout << start << " ";
      start--;
    }

    cout << endl;
    i++;
  }
}

// Pattern-2
int main() {
  int n;
  cout << "Enter the value of N: ";
  cin >> n;

  int i = 1;
  while (i <= n) {

    int j = 1;
    while (j <= (n - i + 1)) {
      cout << j << " ";
      j++;
    }
    // Star Triangle-1:
    int star_1 = 1;
    while (star_1 < i) {
      cout << "* ";
      star_1++;
    }

    //  Star Triangle-2:
    int star_2 = 1;
    while (star_2 < i) {
      cout << "* ";
      star_2++;
    }

    int k = (j - 1);
    while (k) {
      cout << k << " ";
      k--;
    }
    cout << endl;
    i++;
  }
}

// Enter the value of N: 8
// 1 2 3 4 5 6 7 8 8 7 6 5 4 3 2 1
// 1 2 3 4 5 6 7 * * 7 6 5 4 3 2 1
// 1 2 3 4 5 6 * * * * 6 5 4 3 2 1
// 1 2 3 4 5 * * * * * * 5 4 3 2 1
// 1 2 3 4 * * * * * * * * 4 3 2 1
// 1 2 3 * * * * * * * * * * 3 2 1
// 1 2 * * * * * * * * * * * * 2 1
// 1 * * * * * * * * * * * * * * 1