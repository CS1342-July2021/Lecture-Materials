#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// function to convert number to string
// function to convert string to numbers

int main() {
  istringstream inSS("12345");

  // convert to integer
  int number;
  inSS >> number;

  cout << "Number: " << number << endl;
  return 0;
}