#include <iostream>
#include <string>

using namespace std;

void print(int);
void print(double);
void print(string);

int main() {
  print(1);
  print(1.0);
  print("hello");

  return 0;
}

void print(int val) { cout << "Val is an int" << endl; }

void print(double val) { cout << "Val is an double" << endl; }

void print(string val) { cout << "Val is an string" << endl; }
