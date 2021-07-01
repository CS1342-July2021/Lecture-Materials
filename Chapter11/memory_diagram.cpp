#include <iostream>

using namespace std;

int main() {
  int *ptrA;
  int *ptrB;
  int data[6] = {12, 10, 8, 6, 4, 2};

  ptrA = (data + 1);
  ptrB = &data[3];

  (*ptrA)++;
  *ptrB = *ptrA + 2;

  ptrB++;
  *(data + 4) = *ptrA;
  *ptrA = data[0];

  for (int i = 0; i < 6; i++) {
    cout << data[i] << endl;
  }

  return 0;
}