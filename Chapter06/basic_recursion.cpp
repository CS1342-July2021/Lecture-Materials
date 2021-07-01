#include <iostream>

void myFunction() { myFunction(); }

int main() {
  myFunction();  // segmentation fault

  return 0;
}