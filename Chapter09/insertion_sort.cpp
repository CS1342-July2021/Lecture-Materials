#include <iostream>
#include <vector>

using namespace std;

void InsertionSort(vector<int> &numbers) {
  int j;
  int temp;  // Temporary variable for swap

  for (int i = 1; i < numbers.size(); ++i) {
    j = i;
    // Insert numbers[i] into sorted part
    // stopping once numbers[i] in correct position
    while (j > 0 && numbers.at(j) < numbers.at(j - 1)) {
      // Swap numbers[j] and numbers[j - 1]
      temp = numbers.at(j);
      numbers.at(j) = numbers.at(j - 1);
      numbers.at(j - 1) = temp;
      --j;
    }
  }
}

int main() {
  vector<int> numbers = {10, 2, 78, 4, 45, 32, 7, 11};

  cout << "UNSORTED: ";
  for (int i = 0; i < numbers.size(); ++i) {
    cout << numbers.at(i) << " ";
  }
  cout << endl;

  InsertionSort(numbers);

  cout << "SORTED: ";
  for (int i = 0; i < numbers.size(); ++i) {
    cout << numbers.at(i) << " ";
  }
  cout << endl;

  return 0;
}