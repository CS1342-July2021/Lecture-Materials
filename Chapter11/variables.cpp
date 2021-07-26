#include <iostream>

using namespace std;

int main() {
  int x = 10;
  cout << x << endl;
  cout << &x << endl;

  int *ptr = &x;

  cout << ptr << endl;
  cout << &ptr << endl;

  int y;  // not defined
  int *ptr2 = &y;
  cout << *ptr2;  // segmentation fault (-11)

  return 0;
}