#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int> &);

int main() {
  vector<int> numbers = {1, 2, 3, 4, 5, 6};

  reverse(numbers);

  for (int n : numbers) {
    cout << n << " ";
  }
  cout << endl;

  return 0;
}

void reverse(vector<int> &numbers) {
  // int temp = a;
  // a = b;
  // b = temp;

  for (int i = 0; i < numbers.size() / 2; i++) {
    int temp = numbers.at(i);
    numbers.at(i) = numbers.at(numbers.size() - 1 - i);
    numbers.at(numbers.size() - 1 - i) = temp;
  }
}