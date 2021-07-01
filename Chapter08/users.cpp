#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int findFirstName(const vector<string>& names, string query) {
  for (int i = 0; i < names.size(); i++) {
    if (names.at(i) == query) {
      return i;
    }
  }

  return -1;
}

int main() {
  vector<string> firstNames;
  vector<string> lastNames;
  vector<string> ages;

  ifstream inFS;
  int fileNum;

  inFS.open("users.csv");

  if (!inFS.is_open()) {
    cout << "Could not open file users.csv." << endl;
    return 1;
  }

  while (!inFS.eof()) {
    string line;          // read in every line of text
    getline(inFS, line);  // Tom,Riddle,50

    // parse out each line
    stringstream lineSS(line);
    string firstName, lastName, age;
    getline(lineSS, firstName, ',');
    getline(lineSS, lastName, ',');
    getline(lineSS, age);

    // Use firstName, lastName, age...
    firstNames.push_back(firstName);
    lastNames.push_back(lastName);
    ages.push_back(age);
  }

  int index = findFirstName(firstNames, "Harry");
  cout << "Harry Potter's age is " << ages.at(index);

  cout << "Closing file users.txt." << endl;

  // Done with file, so close it
  inFS.close();

  return 0;
}