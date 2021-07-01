#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  double startingFrequency;
  double r;

  cin >> startingFrequency;
  r = pow(2, 1.0 / 12.0);

  cout << fixed << setprecision(2);
  cout << startingFrequency << " " << startingFrequency * pow(r, 1) << " "
       << startingFrequency * pow(r, 2) << " " << startingFrequency * pow(r, 3)
       << " " << startingFrequency * pow(r, 4) << endl;

  return 0;
}
