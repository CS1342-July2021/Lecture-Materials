#include <iostream>

using namespace std;

void swap(int val1, int val2);

int main() {
  int val1 = 100;
  int val2 = 200;

  cout << val1 << " - " << val2 << endl;  // 100 - 200
  swap(val1, val2);
  cout << val1 << " - " << val2 << endl;
  return 0;
}

void swap(int val1, int val2) {
  int originalVal1 = val1;
  val1 = val2;
  val2 = originalVal1;
  cout << "Inside Swap: ";
  cout << val1 << " - " << val2 << endl;
}