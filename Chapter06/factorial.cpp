#include <iostream>

// Implement Factorial
int factorial(int n) {
  // What is the base case?
  if (n == 1) {
    return 1;
  } else {
    // What is the recursive case?
    // n! = n * (n - 1)!
    return n * factorial(n - 1);
  }
}

int main() {
  int result;

  result = factorial(7);

  std::cout << "factorial(7): " << result << std::endl;

  return 0;
}