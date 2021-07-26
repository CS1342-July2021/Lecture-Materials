#include <array>
#include <iostream>

using namespace std;

void printArray(int array[], const int size);
void doubleArray(int array[], const int size);
void multiply(int array[], int array2[], const int size);

int main() {
  const int ARRAY_SIZE = 5;
  int myArray[ARRAY_SIZE]{1, 2, 3, 4, 5};
  int myArray2[ARRAY_SIZE]{1, 2, 3, 4, 5};
  int result[ARRAY_SIZE];

  doubleArray(myArray, ARRAY_SIZE);
  printArray(myArray, ARRAY_SIZE);
  multiply(myArray, myArray2, ARRAY_SIZE);

  // create an stl array
  array<int, 5> myStlArray{1, 2, 3, 4, 5};

  // range-based for-loop
  for (int i = 0; i < myStlArray.size(); i++) {
    cout << myStlArray.at(i) << " ";
  }

  cout << endl;
  for (int val : myStlArray) {
    val *= 2;
  }

  for (int val : myStlArray) {
    cout << val << " ";
  }

  return 0;
}

// pass array by reference
void doubleArray(int array[], const int size) {
  for (int i = 0; i < size; i++) {
    array[i] *= 2;
  }
}

void printArray(int array[], const int size) {
  for (int i = 0; i < size; i++) {
    // cout << array[i] << endl;
  }
}

void multiply(int array[], int array2[], const int size) {
  for (int i = 0; i < size; i++) {
    array2[i] = array2[i] * array[i];
  }
}