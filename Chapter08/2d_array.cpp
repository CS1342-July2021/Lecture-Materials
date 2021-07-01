#include <iostream>
#include <vector>

using namespace std;

int main() {
  int table[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};

  for (int i = 0; i < 3; i++) {    // rows
    for (int j = 0; j < 3; j++) {  // columns
      cout << table[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}