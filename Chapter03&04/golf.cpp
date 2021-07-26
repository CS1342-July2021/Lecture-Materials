#include <iostream>
using namespace std;

int main() {
  int numStrokes;

  cin >> numStrokes;  // 4

  // Assumes "par 4"
  if (numStrokes <= 0) {
    cout << "Invalid entry." << endl;
  } else if (numStrokes == 1) {
    cout << "Hole in 1!!!" << endl;
  } else if (numStrokes == 2) {
    cout << "Eagle!" << endl;
  } else if (numStrokes == 3) {
    cout << "Birdie!" << endl;
  } else if (numStrokes == 4) {
    cout << "Par." << endl;
  } else {
    cout << "Better luck next time." << endl;
  }

  switch (numStrokes) {
    case 1:
      cout << "Hole in 1!!!" << endl;
      break;
    case 2:
      cout << "Eagle!" << endl;
      break;
    case 3:
      cout << "Birdie!" << endl;
      break;

    default:
      break;
  }

  return 0;
}
