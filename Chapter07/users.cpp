#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
  ifstream inFS;

  inFS.open("users.csv");

  if (!inFS.is_open()) {
    cout << "Could not open file users.csv." << endl;
    return 1;
  }

  vector<vector<string>> table;

  while (!inFS.eof()) {
    vector<string> row;
    string line;          // read in every line of text
    getline(inFS, line);  // Tom,Riddle,50

    // parse out each line
    stringstream lineSS(line);  // Tom,Riddle,50
    string token;
    while (getline(lineSS, token, ',')) {
      row.push_back(token);
    }

    table.push_back(row);
  }

  cout << "Closing file users.txt." << endl;

  // Done with file, so close it
  inFS.close();

  return 0;
}