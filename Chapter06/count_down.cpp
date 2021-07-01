#include <iostream>

using namespace std;

void countDown(int n) {
  if (n == 0)
    cout << "GO!" << endl;
  else {
    cout << n << endl;
    countDown(n - 1);
  }
}

int main() {
  countDown(5);
  return 0;
}