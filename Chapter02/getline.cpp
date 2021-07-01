#include <iostream>
#include <string>

using namespace std;

int main() {
  string firstName;
  string lastName;
  string fullName;

  cout << "Please Enter Full Name: " << endl;
  cin >> firstName >> lastName;
  getline(cin, fullName, ',');
  getline(cin, fullName);

  cout << "Hello " << fullName << endl;

  return 0;
}