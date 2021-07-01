#include <iostream>
#include <sstream>

using namespace std;

int main() {
  int decimal = 61;
  stringstream my_ss;
  my_ss << hex << decimal;
  string res = my_ss.str();
  cout << "The hexadecimal value of 61 is: " << res << endl;

  // string hex_str = "0x3d";  // you may or may not add 0x before hex value
  // unsigned int decimal;
  // stringstream my_ss;
  // my_ss << hex << hex_str;
  // my_ss >> decimal;
  // cout << "The Decimal value of 0x3d is: " << decimal;

  return 0;
}