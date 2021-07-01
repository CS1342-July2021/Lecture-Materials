#include <iostream>
#include <string>

using namespace std;

int main() {
  string text;
  int input;
  cout << "Enter Option: ";

  cin >> input;
  cin.ignore();
  cin.clear();

  cout << "Enter a string: ";
  getline(cin, text);

  cout << "You entered " << text << endl;

  return 0;
}
