#include <iostream>
#include <vector>

using namespace std;

void SelectionSort(vector<int> &numbers) {
  int indexSmallest;

  for (int i = 0; i < numbers.size() - 1; ++i) {
    // Find index of smallest remaining element
    indexSmallest = i;
    for (int j = i + 1; j < numbers.size(); ++j) {
      if (numbers.at(j) < numbers.at(indexSmallest)) {
        indexSmallest = j;
      }
    }

    // Swap numbers[i] and numbers[indexSmallest]
    int temp = numbers.at(i);
    numbers.at(i) = numbers.at(indexSmallest);
    numbers.at(indexSmallest) = temp;
  }
}

int main() {
  vector<int> numbers = {10, 2, 78, 4, 45, 32, 7, 11};

  cout << "UNSORTED: ";
  for (int i = 0; i < numbers.size(); ++i) {
    cout << numbers.at(i) << ' ';
  }
  cout << endl;

  SelectionSort(numbers);

  cout << "SORTED: ";
  for (int i = 0; i < numbers.size(); ++i) {
    cout << numbers.at(i) << ' ';
  }
  cout << endl;

  return 0;
}