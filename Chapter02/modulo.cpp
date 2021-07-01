#include <iostream>

using namespace std;

int main() {
  // Integer division and modulo
  int x = 17;
  int y = 5;

  int result = x / y;
  int remainder = x % y;

  if (x % 2 == 0) cout << "Result: " << result << endl;
  cout << "Remainder: " << remainder << endl;

  return 0;
}