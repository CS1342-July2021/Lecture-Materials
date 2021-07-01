#include <iostream>

using namespace std;

int main() {
  int array[] = {1, 2, 3, 4};

  int *array2 = new int[10];

  for (int i = 0; i < 10; i++) {
    array[i] = 0;
  }

  delete array2;

  cout << array << endl;
  cout << &array[0] << endl;

  array[0];  //
  *array;    // 1

  array[1];  //
  *(array + 1);

  *(array) + 1;

  for (int i = 0; i < 4; i++) {
    cout << array[i] << endl;
    cout << *(array + i) << endl;
  }

  // const int *

  return 0;
}