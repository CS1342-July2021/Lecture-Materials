#include <cctype>  // for isAlpha and isDigit
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

int main() {
  const char str[80]{"slksci214klasd1212"};

  // calculate total length
  // count characters that are alpha
  // count characters that are digits
  // print result
  int totalAlpha{0};
  int totalDigit{0};
  int size{0};

  while (str[size] != '\0') {
    if (isalpha(str[size])) {
      totalAlpha++;
    } else if (isdigit(str[size])) {
      totalDigit++;
    }
    size++;
  }

  cout << "Total Characters: " << size << endl;
  cout << "Total Alpha: " << totalAlpha << endl;
  cout << "Total Digit: " << totalDigit << endl;

  return 0;
}