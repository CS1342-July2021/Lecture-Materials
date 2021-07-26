#include <iostream>
#include <string>

using namespace std;

int main() { /* */
  for (int i = 1; i <= 100; i++) {
    cout << i << " - ";
    if (i % 2 == 0) {
      cout << "Even!" << endl;
    } else {
      cout << "Odd!" << endl;
    }
  }

  return 0;
}