#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<string> myVector;

  myVector.push_back("Test");

  cout << "Size: " << myVector.size() << endl;
  cout << "Capacity: " << myVector.capacity() << endl;

  myVector.push_back("Test 2");

  cout << "\nSize: " << myVector.size() << endl;
  cout << "Capacity: " << myVector.capacity() << endl;

  myVector.push_back("Test 3");

  cout << "\nSize: " << myVector.size() << endl;
  cout << "Capacity: " << myVector.capacity() << endl;

  myVector.push_back("Test 4");
  myVector.push_back("Test 5");

  cout << "\nSize: " << myVector.size() << endl;
  cout << "Capacity: " << myVector.capacity() << endl;

  return 0;
}