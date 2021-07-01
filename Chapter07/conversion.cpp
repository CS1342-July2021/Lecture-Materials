#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// function to convert number to string
// function to convert string to numbers

int main() {
  istringstream inSS("12345");
  ostringstream oSS;

  // convert to integer
  int number;
  inSS >> number;

  // convert to a string
  oSS << number;
  string example = oSSS.str();

  cout << "Number: " << number << endl;
  return 0;
}