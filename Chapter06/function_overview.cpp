#include <iostream>

using namespace std;

void functionA();
void functionB();
void functionC();

int main() {
  functionA();

  return 0;
}

void functionA() {
  cout << "Starting functionA()" << endl;
  functionB();
  cout << "Ending functionA()" << endl;
}

void functionB() {
  cout << "Starting functionB()" << endl;
  functionC();
  cout << "Ending functionB()" << endl;
}

void functionC() {
  cout << "Starting functionC()" << endl;
  cout << "Ending functionC()" << endl;
}