#include <iostream>

#include "functions.h"

using namespace std;

int main() {
  char message[] = "Hello World";
  cout << "Here 1";
  int size = findLength(message);
  cout << "Here 2";
  reverse(message, size);

  cout << message << endl;

  return 0;
}