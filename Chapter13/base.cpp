#include <iostream>

using namespace std;

// Base class
class Shape {
 public:
  void setWidth(int w) { width = w; }
  void setHeight(int h) { height = h; }

 protected:
  int width;
  int height;
};

// Derived class
class Rectangle : public Shape {
 public:
  int getArea() { return (width * height); }
};

class Square : private Shape {
 public:
  void setSideLength(int length) {
    height = length;
    width = length;
  }
};

int main(void) {
  Shape shape1;
  Square square;

  square.setSideLength(10);

  // shape1.width = 10;  // private access does not compile

  shape1.setHeight(10);
  shape1.setWidth(10);

  Rectangle Rect;

  // Rect.wisdth = 10;  // cannot access private data member

  Square squareObj;

  squareObj.setSideLength(10);

  Rect.setWidth(5);
  Rect.setHeight(7);

  // Print the area of the object.
  cout << "Total area: " << Rect.getArea() << endl;

  return 0;
}