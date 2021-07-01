#include <iostream>
using namespace std;

int main() {
  const int constantValue{100};
  int numStrokes;

  cin >> numStrokes;

  // Assumes "par 4"
  switch (numStrokes) {
    case 1:
      cout << "Hole in 1!";
      break;
    case 2:
      cout << "Eagle!";
      break;
    case 3:
      cout << "Birdie!";
      break;
    case 4:
      cout << "Par.";
      break;
    default:
      cout << "Invalid Input!";
  }

  return 0;
}
