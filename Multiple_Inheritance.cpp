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
class Base2{
public:
int c, d;
void getdataofb2(int abc, int bcd){
  c = abc;
  d= bcd;
}
};
class Der2: public Base, public Base2{

public:
int pr;
int sum1, sum2;
int sumof1 (){
  sum1 = a + b;
  return sum1;
}
int sumof2 (){
  sum2 = c + d;
  return sum2;
}
};
int main() {
  Der2 Kuchbhi;
  Kuchbhi.getdata(5, 5);
  Kuchbhi.getdataofb2(5, 5);
  cout<<"Sum of 1st base ="<<  Kuchbhi.sumof1();
  cout<<"sum of 2nd base ="<<    Kuchbhi.sumof2();


  return 0;
}