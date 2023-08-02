#include <iostream>
using namespace std;

class Product {
  int id;
  int price;

public:
  void setdata(int a, int b) {
    id = a;
    price = b;
  }

  void display() {
    cout << "id=" << id << endl;
    cout << "Price=" << price << endl;
  }
};
int main() {
  int i, pr;
  Product *ptr = new Product[4];
  Product *ptrTemp = ptr;
  for (int j = 0; j < 4; j++) {
    cout << "Enter id and price" << i << endl;
    cin >> i >> pr;
    ptr->setdata(i, pr); // Drefrencing
    ptr++;
  }

  for (int j = 0; j < 4; j++) {
    ptrTemp->display();
    ptrTemp++;
  }
  return 0;
}