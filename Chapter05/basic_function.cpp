#include <iostream>
#include <string>

using namespace std;

// prototype
int findMax(int val1, int val2);

int main() {
  int result = findMax(1, 2);
  return 0;
}

int findMax(int param1, int param2) {
  int max;
  max = (param1 > param2) ? param1 : param2;
  return max;
}