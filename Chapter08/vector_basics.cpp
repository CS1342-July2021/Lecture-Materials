#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> myVector;  // []

  myVector.push_back("Test");

  cout << "\nSize: " << myVector.size() << endl;
  cout << "Capacity: " << myVector.capacity() << endl;

  myVector.push_back("Test");

  cout << "\nSize: " << myVector.size() << endl;
  cout << "Capacity: " << myVector.capacity() << endl;

  myVector.push_back("Test");

  cout << "\nSize: " << myVector.size() << endl;
  cout << "Capacity: " << myVector.capacity() << endl;

  myVector.push_back("Test");

  cout << "\nSize: " << myVector.size() << endl;
  cout << "Capacity: " << myVector.capacity() << endl;

  myVector.push_back("Test");

  cout << "\nSize: " << myVector.size() << endl;
  cout << "Capacity: " << myVector.capacity() << endl;

  return 0;
}