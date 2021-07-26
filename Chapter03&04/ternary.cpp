#include <iostream>
#include <string>
using namespace std;

int main() {
  int number = -4;
  string result = (number > 0) ? "Positive" : "Negative!";

  cout << result << endl;

  return 0;
}