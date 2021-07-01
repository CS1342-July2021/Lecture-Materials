#include <iostream>

using namespace std;

int findLength(const char text[]) {
  int size = 0;
  while (text[size] != '\0') {
    size++;
  }

  return size;
}

void reverse(char text[], const int &size) {
  for (int i = 0; i < size / 2; i++) {
    char temp = text[i];
    text[i] = text[size - 1 - i];
    text[size - 1 - i] = temp;
  }
}

int main() {
  char message[] = "Hello World";
  int size = findLength(message);

  reverse(message, size);

  cout << message << endl;

  return 0;
}