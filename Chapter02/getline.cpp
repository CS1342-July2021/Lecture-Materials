#include <iostream>
#include <string>

using namespace std;

int main() {
  string fullName;

  cout << "Please Enter Full Name: " << endl;
  getline(cin, fullName);

  cout << fullName << endl;

  return 0;
}