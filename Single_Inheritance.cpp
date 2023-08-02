#include <iostream>
using namespace std;
class Employee {
public:
  int salary;
  int id;
  Employee(int inpId) {
    id = inpId;
    salary = 10000;
  }
  Employee(){};
};
// Default pvt vmode
// pvt - public of base bcm pvt of derived class
// public - public of base public of derived class
// pvt cant be inherited
class Programmer : private Employee {
public:
  int lng_code;
  Programmer(int inpId = 0) 
{ 
  id = inpId;
  lng_code =5;
                            
}
  void getdata() { cout << id << endl; }
};
int main() {
  Employee Abin(101), Harry(102);
  cout << Abin.salary<<endl;

  Programmer Abinson(105);
  cout << Abinson.lng_code<<endl;

  return 0;
}