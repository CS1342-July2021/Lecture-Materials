#include <iostream>

using namespace std;

int main() {
  const int ARRAY_SIZE = 5;
  int myArray[ARRAY_SIZE];  //

  // print out contents of array - contents unknown
  // for (int i = 0; i < ARRAY_SIZE; i++) {
  //   cout << &myArray[i] << endl;
  // }

  // const int ARRAY_SIZE = 5;
  // int myArray[ARRAY_SIZE];

  int myArray2[ARRAY_SIZE]{1, 2, 3, 4, 5};
  cout << myArray2[0] << endl;
  cout << myArray2[10] << endl;

  return 0;
}