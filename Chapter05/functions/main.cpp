#include <iostream>

#include "functions.h"

/**
 * Create 2 functions
 * 1. for finding the length of a c-string
 * 2. to reverse the contents of that c-string
 */

using namespace std;

int main() {
  char message[] = "Hello World";

  int size = findLength(message);
  reverse(message, size);

  cout << message << endl;

  return 0;
}