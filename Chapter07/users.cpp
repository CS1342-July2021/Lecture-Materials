#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

int main() {
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
    cout << firstName << endl;
    cout << lastName << endl;
    cout << age << endl;
    cout << endl;
  }

  cout << "Closing file users.txt." << endl;

  // Done with file, so close it
  inFS.close();

  return 0;
}