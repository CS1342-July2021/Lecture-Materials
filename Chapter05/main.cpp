#include <iostream>

using namespace std;

int main() {
  // represents a row
  int n = 10;
  for (int row = 0; row < n; ++row) {
    for (int col = n - row; col > 0; --col) {
      cout << " ";
    }

    for (int col = 0; col < (n + 2 * row); ++col) {
      if (col == 0 || col == (n + 2 * row) - 1 || row == 0 || row == n - 1) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }

  return 0;
}