#include <iostream>
#include <string>
using namespace std;

// Create a function that changes spaces to hyphens in a string using pass by
// reference
// "cat"
void strToHyphen(string &word) {
  for (int i = 0; i < word.size(); i++) {
    if (word.at(i) == ' ') {
      word.at(i) = '-';
    }
  }
}

int main() {
  string userStr;  // Input string from user

  // Prompt user for input
  cout << "Enter string with spaces: " << endl;
  getline(cin, userStr);

  // TODO: Call function to modify user defined string
  strToHyphen(userStr);

  // Output modified string
  cout << "String with hyphens: ";
  cout << userStr << endl;

  return 0;
}