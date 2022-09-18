/*
Love Babbar Patterns C++:
https://youtu.be/dr-pLeJBr38
*/
#include <iostream>
using namespace std;

// int main() {
//   char ch;
//   cout << "Enter the Character: ";
//   cin >> ch;

//   if ((ch >= 65) && (ch <= 90)){
//     cout << "Entered Character is an upper-case letter";
//   }
//   else if((ch >= 97) && (ch <= 122)){
//     cout << "Entered Character is a small-case letter";
//   }
//   else if((ch >= 48) && (ch <= 57)){
//     cout << "Entered Character is a Number"<< endl;
//   }
// }

/*
int main() {
  int n;
  cout << "Enter a number between 1-100:" << endl;
  cin >> n;
  int i = 1;
  int sum = 0;
  while (i <= n) {
    if (i % 2 == 0) {
      sum = sum + i;
    }
    i = i + 1;
  }

  cout << "Sum of N even natural numbers: " << sum << endl;
} */

// Pattern-1
int main() {
  int i,n;
  cout << "Enter the value of N: ";
  cin >> n;
  i = 1;

  while(i<=n){
    int j=1;
    while(j<=n){
        cout<<"* ";
        j++;
      }
    cout<<endl;
    i++;
  }
}

// Pattern-2:
int main() {
  int i,n;
  cout << "Enter the value of N: ";
  cin >> n;
  i = 1;

  while(i<=n){
    int j=1;
    while(j<=n){
        cout<<i<<" ";
        j++;
      }
    cout<<endl;
    i++;
  }
}

// Pattern-3:
int main() {
  int i,n;
  cout << "Enter the value of N: ";
  cin >> n;
  i = 1;

  while(i<=n){
    int j=1;
    while(j<=n){
        cout<<j<<" ";
        j++;
      }
    cout<<endl;
    i++;
  }
}

// Pattern-4:
int main() {
  int i,n;
  cout << "Enter the value of N: ";
  cin >> n;
  i = 1;
  int count = 1;
  while(i<=n){
    int j=1;
    while(j<=n){
        cout<<count<<" ";
        count++;
        j++;
      }
    cout<<endl;
    i++;
  }
}

// Pattern-5:
int main() {
  int i,n;
  cout << "Enter the value of N: ";
  cin >> n;
  i = 1;
  while(i<=n){
    int j=1;
    while(j<=i){
        cout<<"* ";
        j++;
      }
    cout<<endl;
    i++;
  }
}

// Pattern-6:
int main() {
  int i,n;
  cout << "Enter the value of N: ";
  cin >> n;
  i = 1;
  while(i <= n){
    int j = 1;
    while(j <= i){
        cout << i <<" ";
        j++;
      }
    cout << endl;
    i++;
  }
}

// Pattern-7: Homework
int main() {
  int i,n;
  cout << "Enter the value of N: ";
  cin >> n;
  i = 1;
  int count = 1;
  while(i <= n){
    int j = 1;
    while(j <= i){
        cout << count <<" ";
        count++;
        j++;
      }
    cout << endl;
    i++;
  }
}

// Pattern-8: Method-1
int main() {
  int i,n;
  cout << "Enter the value of N: ";
  cin >> n;
  i = 1;
  int count = 1;
  while(i <= n){
    int j = 1;
    count = i;
    while(j <= i){
        cout << count <<" ";
        count++;
        j++;
      }
    cout << endl;
    i++;
  }
}

// Pattern-8: Method-2
int main() {
  int i,n;
  cout << "Enter the value of N: ";
  cin >> n;
  i = 1;
  while(i <= n){
    int j = 1;
    while(j <= i){
        cout << (j+i-1) <<" ";
        j++;
      }
    cout << endl;
    i++;
  }
}

// Pattern-9: Method-1
int main() {
  int i,n;
  cout << "Enter the value of N: ";
  cin >> n;
  i = 1;
  while(i <= n){
    int j = 1;
    int val = i;
    while(j <= i){
        cout << val <<" ";
        val--;
        j++;
      }
    cout << endl;
    i++;
  }
}

// Pattern-9: Method-2
int main() {
  int i,n;
  cout << "Enter the value of N: ";
  cin >> n;
  i = 1;
  while(i <= n){
    int j = 1;
    while(j <= i){
        cout << (i-j+1) <<" ";
        j++;
      }
    cout << endl;
    i++;
  }
}

// Pattern-10:
int main() {
  int i,n;
  cout << "Enter the value of N: ";
  cin >> n;
  i = 1;
  char ch = 'A';
  while(i <= n){
    int j = 1;
    while(j <= n){
        cout << ch << " ";
        j++;
      }
    cout << endl;
    ch++;
    i++;
  }
}

// Pattern-11:
int main() {
  int i,n;
  cout << "Enter the value of N: ";
  cin >> n;
  i = 1;
  while(i <= n){
    int j = 1;
  char ch = 'A';
    while(j <= n){
        cout << ch << " ";
        ch++;
        j++;
      }
    cout << endl;
    i++;
  }
}

// Pattern-12:
int main() {
  int i, n;
  cout << "Enter the value of N: ";
  cin >> n;
  i = 1;
  char ch = 'A';
  while (i <= n) {
    int j = 1;
    while (j <= n) {
      cout << ch << " ";
      ch++;
      j++;
    }
    cout << endl;
    i++;
  }
}

// Pattern-13:
int main() {
  int i, n;
  cout << "Enter the value of N: ";
  cin >> n;
  i = 1;

  while (i <= n) {

    int j = 1;
    while (j <= n) {
      char ch = 'A' + (i+j-2);
      cout << ch << " ";
      ch++;
      j++;
    }
    cout << endl;
    i++;
  }
}

//  Pattern-14:
int main() {
  int i, n;
  cout << "Enter the value of N: ";
  cin >> n;
  i = 1;

  while (i <= n) {

    int j = 1;
    while (j <= i) {
      char ch = 'A' + (i-1);
      cout << ch << " ";
      j++;
    }
    cout << endl;
    i++;
  }
}

// Pattern-15:
int main() {
  int i, n;
  cout << "Enter the value of N: ";
  cin >> n;
  i = 1;
  char ch = 'A';
  while (i <= n) {

    int j = 1;
    while (j <= i) {
      cout << ch << " ";
      ch++;
      j++;
    }
    cout << endl;
    i++;
  }
}

//  Pattern-16:
int main() {
  int i, n;
  cout << "Enter the value of N: ";
  cin >> n;
  i = 1;
  
  while (i <= n) {
    int j = 1;
    while (j <= i) {
      char ch = 'A' + (j + i - 2);
      cout << ch << " ";
      j++;
    }
    cout << endl;
    i++;
  }
}

//  Pattern-17:
int main() {
  int i, n;
  cout << "Enter the value of N: ";
  cin >> n;
  i = 1;
  
  while (i <= n) {
    int j = 1;
    char ch = 'A' + (n - i);
    while (j <= i) {
      cout << ch << " ";
      ch++;
      j++;
    }
    cout << endl;
    i++;
  }
}

// Patern-18:
int main() {
  int i, n;
  cout << "Enter the value of N: ";
  cin >> n;
  i = 1;
  while (i <= n) {
    int j = 1;
    while (j <= n) {
      if(j<=(n-i)){
        cout << "  ";
      }
        
      else{
        cout<< "* ";
      }
      
      j++;
    }
    cout << endl;
    i++;
  }
}

// Patern-19:
int main() {
  int i, n;
  cout << "Enter the value of N: ";
  cin >> n;
  i = 1;
  while (i <= n) {
    int j = 1;
    while (j <= (n-i+1)) {
      cout << "* ";
      j++;
    }
    cout << endl;
    i++;
  }
}

// Patern-20:
int main() {
  int i, n;
  cout << "Enter the value of N: ";
  cin >> n;
  i = 1;
  while (i <= n) {
    int j = 1;
    while (j <= n) {
      if(i<=(n-i+1))
      {
        cout << "* ";
      }
      else
      {
        cout << "  ";
      }
      j++;
    }
    cout << endl;
    i++;
  }
}