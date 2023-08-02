#include <iostream>
using namespace std;
class Base {
public:
int a, b;
void getdata(int ab, int bc){
  a = ab;
  b= bc;
}
};
// Default pvt vmode
// pvt - public of base bcm pvt of derived class
// public - public of base public of derived class
// pvt cant be inherited
class Der1 : public Base{
public:
int sum;
int add (){
  sum = a + b;
  return sum;
}
};
class Der2: public Der1{

public:
int pr;
int product (){
  pr = sum * sum;
  return pr;
}
};
int main() {
  Der2 Kuchbhi;
  Kuchbhi.getdata(5, 5);
  cout<<"Sum ="<<  Kuchbhi.add();
  cout<<"Prod ="<<    Kuchbhi.product();


  return 0;
}