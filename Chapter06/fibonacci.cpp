#include <iostream>

using namespace std;

int fib(int n) {
  if (n <= 1) return 1;
  return fib(n - 1) + fib(n - 2);
}

int main() {
  cout << fib(50) << endl;

  return 0;
}