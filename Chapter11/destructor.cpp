#include <iostream>

using namespace std;

class MyClass {
 private:
  int data;
  int *ptr;

 public:
  MyClass();
  ~MyClass();
};

MyClass::MyClass() {
  ptr = new int(10);
  data = 10;
}

MyClass::~MyClass() {
  cout << "destructor called" << endl;
  delete ptr;
}

void functionA() {
  MyClass newClass1;  // 1 int on the heap
  MyClass newClass2;  // 1 int on the heap
}

int main() {
  MyClass *newClass = new MyClass;

  delete newClass;

  // functionA();

  return 0;
}