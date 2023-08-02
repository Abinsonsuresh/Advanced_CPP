#include <iostream>
using namespace std;

class Base{
public:
int var_base;
void display(){
  cout<<"varbase="<<var_base;
}

};
class Derived: public Base{
public:
int var_der ;
void display()
{
    cout<<"var_der="<<var_der<<endl;
    cout<<"var_base="<<var_base<<endl;
}
};
int main() {

  Base *base_ptr;
  Base obj_base;
  Derived obj_der;
  base_ptr = &obj_der;
  base_ptr -> var_base = 30;
   base_ptr -> display();

  Derived *der_ptr;
  der_ptr= &obj_der;
  der_ptr -> var_der =90;
  der_ptr -> display();
  der_ptr -> var_base =1000;
  der_ptr -> display();
  
  
  
  
  return 0;
}