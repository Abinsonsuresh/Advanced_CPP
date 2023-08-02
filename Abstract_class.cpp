#include <iostream>
using namespace std;

class Base{
public:
int var_base=100;
 virtual void display()=0;

};
class Derived: public Base{
public:
int var_der=5 ;
void display()
{
    cout<<"2var_der="<<var_der<<endl;
    cout<<"2var_base="<<var_base<<endl;
}
};
int main() {

  Base *base_ptr;

  Derived obj_der;

  // base_ptr = &obj_der;
  // base_ptr -> display();

  Base* tuts[2];
  tuts[0] = &obj_der;
  tuts[0] -> display();


  // Derived *der_ptr;
  // der_ptr= &obj_der;
 
  
  
  
  
  return 0;
}