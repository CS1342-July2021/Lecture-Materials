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
  int min = numbers.at(0);
  for (int num : numbers) {
    if (num < min) {
      min = num;
    }
  }

  return min;

  return 0;
}

void normalize(vector<int> &numbers) {
  int min = findMin(numbers);

  for (int &val : numbers) {
    val -= min;
  }
}

int findMin(vector<int> &numbers) {
  int min = numbers.at(0);
  for (int num : numbers) {
    if (num < min) {
      min = num;
    }
  }

  return min;
}