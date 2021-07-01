// Basic Euclidean Algorithm
#include <iostream>
using namespace std;

// Function to return
// gcd of a and b
int gcd(int a, int b) {
  if (b == 0)
    return a;
  else
    return gcd(b, a % b);
}

int main() {
  int a = 10, b = 8;
  cout << "GCD(" << a << ", " << b << ") = " << gcd(a, b) << endl;
  return 0;
}
