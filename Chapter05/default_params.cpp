#include <iostream>
using namespace std;

int add(int x, int y, int z, int a);

int main() {
  cout << add(1, 2) << endl;
  cout << add(1, 2, 3) << endl;
  cout << add(1, 2, 3, 4) << endl;

  return 0;
}

int add(int x, int y, int z = 0, int a = 0) {
  int total = x + y + z + a;
  return total;
}