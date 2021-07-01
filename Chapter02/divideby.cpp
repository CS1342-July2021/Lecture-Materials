#include <iostream>
#include <cmath>
using namespace std;



int main() {
  int userNum{0};
  int x{1}; // 

  cout << "Enter in userNum: ";
  cin >> userNum;

  cout << "Enter in x: ";
  cin >> x;

  int output1 = userNum / x;
  int output2 = output1 / x;
  int output3 = output2 / x;

  cout << "Output 1: " << output1 << endl;
  cout << "Output 2: " << output2 << endl;
  cout << "Output 3: " << output3 << endl;

  return 0;
}