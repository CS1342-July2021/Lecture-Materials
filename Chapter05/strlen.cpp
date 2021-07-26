#include <cstring>
#include <iostream>

using namespace std;

/** Implement your own strlen function! **/
int myStrlen(const char[]);

int main() {
  int size;
  const char str[]{"This is an example"};

  size = myStrlen(str);

  cout << "Our Size: " << size << endl;
  cout << "strlen(): " << strlen(str) << endl;

  return 0;
}

int myStrlen(const char word[]) {
  int size{0};
  while (word[size] != '\0') {
    size++;
  }
  return size;
}