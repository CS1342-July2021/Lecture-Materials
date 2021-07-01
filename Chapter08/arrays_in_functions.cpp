#include <iostream>

using namespace std;

void printArray(int array[], const int size);
void doubleArray(int array[], const int size);

int main() {
  const int ARRAY_SIZE = 5;
  int myArray[ARRAY_SIZE]{1, 2, 3, 4, 5};

  doubleArray(myArray, ARRAY_SIZE);
  printArray(myArray, ARRAY_SIZE);

  return 0;
}

void doubleArray(int array[], const int size) {
  for (int i = 0; i < size; i++) {
    array[i] = array[i] * 2;
  }
}

void printArray(int array[], const int size) {
  cout << "Array: ";
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}