#include <iostream>
using namespace std;
#define rows 50
#define cols 50


class Matrix{
int arr[rows][cols];
public:
void input();
void Display();
// void MAt();
void operator+(Matrix x);
//with class return type 
//Matrix operator+(Matrix a);
};

void Matrix:: input(){
  // int row=a, col=b;
  cout<<"Enter the values"<<endl;
  // cin>>row>>col;
  for(int i=0;i<3;i++)
    {
      for(int j=0;j<3;j++)
        {
          cin>>arr[i][j];
        }
      cout<<endl;
    }
}
void Matrix:: Display(){
    for(int i=0;i<3;i++)
    {
      for(int j=0;j<3;j++)
        {
          cout<<arr[i][j]<<" ";
        }
      cout<<endl;
    }
}
void Matrix::operator+(Matrix x)
{
  int temp[rows][cols];
    for(int i=0;i<3;i++)
    {
      for(int j=0;j<3;j++)
        {
          temp[i][j] = arr[i][j] + x.arr[i][j];
        }
      cout<<endl;
    }



    for(int i=0;i<3;i++)
    {
      for(int j=0;j<3;j++)
        {
          cout<<temp[i][j]<<" ";
        }
      cout<<endl;
    }
}

  

int main() {


  Matrix A, B, C;
  A.input();
  A.Display();
  B.input();
  B.Display();
  A + B;
  // C.Display();
  return 0;
}