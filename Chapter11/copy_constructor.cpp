#include <iostream>

using namespace std;

class MyClass {
 public:
  int *ptr;

  MyClass(const MyClass &copyClass);
  MyClass();
};

MyClass::MyClass() { ptr = new int(10); }

MyClass::MyClass(const MyClass &copyClass) {
  // ptr = copyClass.ptr;

  ptr = new int;
  *ptr = *(copyClass.ptr);
}

void updateClass(MyClass localClass) { *(localClass.ptr) = 100; }

int main() {
  MyClass obj1;
  MyClass obj2(obj1);

  cout << "ptr 1: " << *(obj2.ptr) << endl;
  updateClass(obj2);
  cout << "ptr 1 again: " << *(obj2.ptr) << endl;
  return 0;
}