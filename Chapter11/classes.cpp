#include <iostream>

using namespace std;

class MyVector {
 public:
  MyVector();
  MyVector(int size);

 private:
  int *numbers;
  int size;
  int capacity;
};

MyVector::MyVector() {}

MyVector::MyVector(int size) {
  numbers = new int[size];
  this->size = size;
  capacity = size;
}

int main() {
  MyVector v1;

  return 0;
}