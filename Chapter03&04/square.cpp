#include <iostream>

using namespace std;

int main() {
  int size;
  cout << "Enter a size of a square: ";
  cin >> size;

  // draw a square
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      cout << " * ";
    }
    cout << endl;
  }

  // draw a right triangle
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < i; j++) {
      cout << " * ";
    }
    cout << endl;
  }

  return 0;
}