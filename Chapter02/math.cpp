#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double totalDistance; // result

  // point 1
  double x1 = 2.4;
  double y1{5.00};
  // point 2
  double x2{10.0};
  double y2{10.0};
  
  // TODO: Implement solution
  double xDist = pow(x2 - x1, 2);
  double yDist = pow(y2 - y1, 2);
  totalDistance = sqrt(xDist + yDist);

  cout << "Distance between points: " << totalDistance << endl;

  return 0;
}



















// double xDist = pow(x2 - x1, 2);
// double yDist = pow(y2 - y1, 2);
// totalDist = sqrt(xDist + yDist);
