#include <iostream>

using namespace std;

int fib(int n) {
  // base
  if (n <= 1)
    return n;
  else
    return fib(n - 1) + fib(n - 2);
}

int main() {
  cout << fib(5) << endl;

  return 0;
}