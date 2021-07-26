#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int wordCount(string str);

int main() {
  string myString;

  cout << "Enter a sentence: ";
  getline(cin, myString);

  // "The red fox jumped over the yellow dog"
  int totalWords = wordCount(myString);
  cout << "\nNumber of words: " << totalWords << endl;

    return 0;
}

int wordCount(string str) {
  string temp;
  int count{0};
  istringstream inSS(str);  // The red fox jumped over the yellow dog

  while (inSS >> temp) {
    cout << temp << endl;
    count++;
  }

  return count;
}