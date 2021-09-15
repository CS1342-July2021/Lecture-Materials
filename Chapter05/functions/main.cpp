#include <iostream>

// #include "functions.h"

/**
 * Create 2 functions
 * 1. for finding the length of a c-string
 * 2. to reverse the contents of that c-string
 */

int findLength(const char[]);
void reverse(char[], const int &);

using namespace std;

int main() {
  char message[] = "Hello World";

  int size = findLength(message);
  reverse(message, size);

  cout << message << endl;

  return 0;
}

int findLength(const char word[]) {
  int size{0};
  while (word[size] != '\0') {
    size++;
  }

  return size;
}

void reverse(char word[], const int &size) {
  for (int i = 0; i < size / 2; i++) {
    char temp = word[i];
    word[i] = word[size - 1 - i];
    word[size - 1 - i] = temp;
  }
}