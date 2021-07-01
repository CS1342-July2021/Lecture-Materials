#include <iostream>

using namespace std;

int main() {
  int val1 = 100;
  int val2 = 23;

  double result = static_cast<double>(val1) / static_cast<double>(val2);

  cout << result << endl;

  return 0;
}