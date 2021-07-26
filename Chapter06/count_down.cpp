#include <iostream>

using namespace std;

void countDown(int n) {
  // define the base case
  if (n == 0) {
    cout << "GO!" << endl;
  } else {
    cout << n << " ";
    n--;  // the work
    countDown(n);
  }
}

int main() {
  countDown(5);
  return 0;
}