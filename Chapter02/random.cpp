#include <cstdlib>  // rand & srand
#include <ctime>    // time
#include <iostream>

using namespace std;

int main() {
  // srand(time(NULL));
  int random{(rand() % 100) + 1};

  cout << "Random Number: " << random << endl;

  return 0;
}