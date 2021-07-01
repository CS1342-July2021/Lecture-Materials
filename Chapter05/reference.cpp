#include <cstring>
#include <iostream>

using namespace std;

int main() {
  // normal variables
  int value{10};

  // Non-const reference
  int &reference = value;

  cout << &value << endl;
  cout << &reference << endl;

  value += 10;

  cout << value << endl;  //
  cout << reference << endl;

  // const reference

  // using address operator

  return 0;
}