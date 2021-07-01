#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void display();
void formatString(string);
char update(char);

int main() {
  display();
  string example{"This is a test"};

  formatString(example);

  return 0;
}

void display() { cout << "Welcome!!" << endl; }

void formatString(string text) {
  const unsigned int size = text.size();
  for (int i = 0; i < size; i++) {
    text.at(i) = update(text.at(i));
  }
}

char update(char token) { return toupper(token); }