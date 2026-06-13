#include <iostream>
using namespace std;

class A{
  public:
    int a;
    void show(){ cout<< a << endl;}
};

int main(){
  A *ptr = new A;
  ptr->a = 10;
  ptr->show();
  return 0;
}