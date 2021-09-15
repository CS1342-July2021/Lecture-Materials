#include <iostream>
#include <string>
using namespace std;

// Create a function that changes spaces to hyphens in a string using pass by
// reference
// "cat"
void strToHyphen(string& word) {
  for (int i = 0; i < word.size(); i++) {
    if (word.at(i) == ' ') {
      word.at(i) = '-';
    }
  }
}

void cstringToHyphen(char word[], const int& size) {
  for (int i = 0; i < size; i++) {
    if (word[i] == ' ') {
      word[i] = '-';
    }
  }
}

int main() {
  // string userStr;  // Input string from user

  // // Prompt user for input
  // cout << "Enter string with spaces: " << endl;
  // getline(cin, userStr);

  // // TODO: Call function to modify user defined string
  // strToHyphen(userStr);

  // // Output modified string
  // cout << "String with hyphens: ";
  // cout << userStr << endl;

  const int size = 6;
  char word[size] = "1   0";

  cstringToHyphen(word, size);

  cout << word << endl;

  return 0;
}