#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Enter a number for N: ";
  cin >> n;

  // Implement FizzBuzz
  for (int i = 0; i < n; i++) {
    if (i % 3 == 0) cout << "Fizz";
    if (i % 5 == 0) cout << "Buzz";
    if (i % 3 != 0 && i % 5 != 0) cout << i;
    cout << endl;
  }

  return 0;
}