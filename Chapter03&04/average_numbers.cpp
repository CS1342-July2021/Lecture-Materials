#include <iostream>

using namespace std;

int main() {
  int input;
  int sum{0};
  int count{0};
  double average{0};

  cout << "Enter a number:";
  cin >> input;

  // implement while loop
  while (input != 0) {
    sum += input;
    count++;

    cout << "Enter a number:";
    cin >> input;
  }

  average = static_cast<double>(sum) / count;

  cout << "Sum: " << sum << endl;
  cout << "Average: " << average << endl;

  return 0;
}