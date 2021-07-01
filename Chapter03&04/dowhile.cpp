#include <iostream>

using namespace std;

int main() {
  int count = 0;
  int num = 6;  // what happens if num = 4?

  do {
    num--;
    count++;
  } while (num > 4);

  cout << count << endl;
  return 0;
}