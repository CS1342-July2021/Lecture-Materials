#include <cstring>
#include <iostream>

using namespace std;

int main() {
  const char str[]{"This is an example"};

  // TODO: Convert to function
  int size{0};
  while (str[size] != '\0') {
    size++;
  }

  cout << "Our Size: " << size << endl;
  cout << "strlen(): " << strlen(str) << endl;

  return 0;
}