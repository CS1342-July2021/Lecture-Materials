#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

void parseValues(string, vector<string> &);

int main() {
  string tester = "Erik,Gabrielsen,egabrielsen@smu.edu";

  vector<string> values;

  parseValues(tester, values);

  for (string token : values) {
    cout << token << endl;
  }

  return 0;
}

void parseValues(string stringToParse, vector<string> &values) {
  string word;
  // convert to inSS
  istringstream inSS(stringToParse);  // Erik,Gabrielsen,egabrielsen@smu.edu
  // parse values
  while (getline(inSS, word, ',')) {
    values.push_back(word);
  }
}