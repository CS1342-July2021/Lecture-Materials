#include <iostream>

using std::cout;
using std::endl;

void update() {
  static int local{40};
  cout << local++ << endl;
}

int main() {
  update();
  update();
  update();
  update();
  update();
  update();
}