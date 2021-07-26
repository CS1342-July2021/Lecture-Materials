#include <cstdlib>
#include <ctime>
#include <iostream>
#include <random>

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
  int randomNumber = rand() % 2;  // 0 - 1
  return (randomNumber == 0) ? "heads" : "tails";
}