#include <iostream>
#include <vector>

using namespace std;

int findMin(vector<int> &numbers);  //

int main() {
  vector<int> numbers = {1, 2, 3, 4, 5, 6};

  int min = findMin(numbers);

  cout << "Min: " << min << endl;

  return 0;
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