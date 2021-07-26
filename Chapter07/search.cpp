#include <iostream>
#include <string>
#include <vector>

using namespace std;

int findString(vector<string> &, string);

int main() {
  vector<string> words = {"One", "Two", "Three", "Four", "Five"};

  int indexFound = findString(words, "Six");

  cout << "Three was found @ index: " << indexFound << endl;

  return 0;
}

int findString(vector<string> &words, string query) {
  for (int i = 0; i < words.size(); i++) {
    if (words.at(i) == query) {
      return i;
    }
  }

  for (string val : words) {
    cout << val;
  }

  return -1;
}