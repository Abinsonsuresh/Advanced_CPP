#include <iostream>
using namespace std;

class Complex {
  int real, img;

public:
  Complex(int r = 0, int i = 0) {
    real = r;
    img = i;
  }
  void print();

  Complex operator+(Complex c) {
    Complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
  }
};

void Complex ::print() { cout << "real = " << real << "img = " << img << endl; }
int main() {
  Complex c1(5, 10);
  Complex c2(5, 10);
  Complex c3;
  c3 = c1 + c2;
  c3.print();

  // std::cout << "Hello World!\n";
}