#include <iostream>
using namespace std;
class Math {
  int x;
  int y;

public:
  Math() {
    x = 0;
    y = 0;
  }
  Math(int a, int b) {
    x = a;
    y = b;
  }
  Math operator+(Math m) {
    Math temp;
    temp.x = x + m.x;
    temp.y = y + m.y;
    return temp;
  }
  Math operator-(Math m);
  void Display() { cout << "So the x=" << x << " Y is=" << y << endl; }
};
Math Math:: operator-(Math m) {
  Math tmp;
  tmp.x = x - m.x;
  tmp.y = y - m.y;
  return tmp;
}
int main() {
  Math ob1(10, 20), ob2(30, 40);
  Math ob3 = ob1 + ob2;
  ob3.Display();
  Math ob4 = ob1 - ob2;
  ob4.Display();
}
