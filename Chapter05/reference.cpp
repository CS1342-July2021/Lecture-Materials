#include <cstring>
#include <iostream>

using namespace std;

void display(int num) {
  cout << &num << endl;
  cout << num << endl;
}

int main() {
  // normal variables
  int value{10};
  int value2{20};

  cout << "Original Val & " << &value << endl;
  display(value);

  // Non-const reference
  int &reference = value;

  value += 10;

  // cout << value << endl;  //
  // cout << reference << endl;

  // const reference

  // using address operator

  return 0;
}