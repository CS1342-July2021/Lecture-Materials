#include <iostream>

using namespace std;

int main() {
  int x{10};
  int y{5};

  if (x < 15 && y > 9) {
    cout << "A";
  } else if ((x > 10 && y < 9) && y > 5) {
    cout << "B";
  } else if ((x <= 10 && y < 9) && y >= 5) {
    cout << "C";
  } else {
    cout << "D";
  }
}