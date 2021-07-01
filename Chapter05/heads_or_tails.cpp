#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

string headsOrTails();

int main() {
  int numberOfFlips{10};

  srand(time(NULL));  // Unique seed

  for (int i{0}; i < numberOfFlips; ++i) {
    cout << headsOrTails() << endl;
  }

  return 0;
}

string headsOrTails() {
  int value = rand() % 2;
  return (value == 0) ? "Heads" : "Tails";
}