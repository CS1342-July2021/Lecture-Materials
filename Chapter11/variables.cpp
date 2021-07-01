#include <iostream>

using namespace std;

void functionA() {
  int x = 10;
  int y = 10;
}

void displayPtr(int *ptr) { cout << *ptr << endl; }

int main() {
  functionA();

  int value = 10;
  int *ptr = &value;

  int *ptr = nullptr;

  if (!ptr) {
    cout << "Error";
  } else {
    cout << *ptr;
  }

  int *ptr;

  cout << *ptr << endl;  // segmentation fault

  cout << &value << endl;  // 0x1234
  cout << ptr << endl;     // 0x1234

  cout << *ptr << endl;   // 10
  cout << value << endl;  // 10

  cout << &ptr << endl;  // 0x5432

  int *ptr = new int;  // ?
  int value = 10;      // 0x1234

  *ptr = 10;

  displayPtr(&value);

  int *ptr2 = &value;

  cout << ptr2;   // memory address - 0x1234
  cout << &ptr2;  // memory address - 0x2345

  return 0;
}