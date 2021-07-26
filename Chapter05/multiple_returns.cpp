#include <iostream>

using namespace std;

void setPlayerScores(double &player1Score, double &player2Score) {
  player1Score = 10;
  player2Score = 15;
}

// Note the const keyword denoting that this function does not mutate those
// parameters
void displayScore(const double &player1Score, const double &player2Score) {
  cout << player1Score << "  " << player2Score << endl;
}

int main() {
  double player1Score = 0;
  double player2Score = 0;

  setPlayerScores(player1Score,
                  player2Score);  // player1Score and player2Score values now
                                  // hold the values "returned" from

  displayScore(player1Score, player2Score);
  return 0;
}