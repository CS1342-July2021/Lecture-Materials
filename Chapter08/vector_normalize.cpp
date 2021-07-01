#include <iostream>
#include <vector>

using namespace std;

int findMin(vector<int> &numbers);
void normalize(vector<int> &numbers);

int main() {
  vector<int> numbers = {10, 5, 15, 4, 5, 6};

  normalize(numbers);

  for (int n : numbers) {
    cout << n << " ";
  }
  cout << endl;

  return 0;
}

void normalize(vector<int> &numbers) {
  // find min
  int min = findMin(numbers);

  // update numbers with min
  for (int &num : numbers) {
    num -= min;
  }
}

int findMin(vector<int> &numbers) {
  int min = numbers.at(0);
  for (int number : numbers) {
    if (number < min) {
      min = number;
    }
  }

  return min;
}