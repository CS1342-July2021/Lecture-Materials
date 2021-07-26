#include <iostream>
#include <limits>
#include <string>
using namespace std;

int main() {
  string sentence;
  string word;

  cin >> word;
  getline(cin, sentence);

  cout << "Word: " << word << endl;
  cout << "Sentence: " << sentence << endl;

  return 0;
}

// int number;
// cout << "Enter a number: " << endl;
// cin >> number;

// while (cin.fail()) {
//   // Clear error state
//   cin.clear();

//   // Ignore characters in stream until newline
//   cin.ignore(numeric_limits<streamsize>::max(), '\n');

//   cout << "Try again: " << endl;
//   cin >> number;
// }

// cout << "You entered: " << number << endl;