#include <cstring>
#include <iostream>

using namespace std;

bool palindrome_iterative(char word[], int lowerBound, int upperBound);
bool palindrome_recursive(char word[], int lowerBound, int upperBound);

int main() {
  char example[] = "racecar";
  char example2[] = "palindrome";

  cout << "--Using Iteration--" << endl;

  const bool isPalindrome1 =
      palindrome_iterative(example, 0, strlen(example) - 1);
  if (isPalindrome1) {
    cout << example << " is a palindrome" << endl;
  } else {
    cout << example << " is not a palindrome" << endl;
  }

  cout << "\n--Using Recursion--" << endl;

  const bool isPalindrome2 =
      palindrome_recursive(example, 0, strlen(example) - 1);
  if (isPalindrome2) {
    cout << example << " is a palindrome" << endl;
  } else {
    cout << example << " is not a palindrome" << endl;
  }

  return 0;
}

bool palindrome_iterative(char word[], int lowerBound, int upperBound) {
  /** implement **/
  while (upperBound >= lowerBound) {
    if (word[lowerBound] != word[upperBound]) {
      return false;
    } else {
      lowerBound++;
      upperBound--;
    }
  }

  return true;
}

bool palindrome_recursive(char word[], int lowerBound, int upperBound) {
  if (word[lowerBound] != word[upperBound])
    return false;
  else if (upperBound <= lowerBound)
    return true;
  else
    return palindrome_recursive(word, ++lowerBound, --upperBound);
}