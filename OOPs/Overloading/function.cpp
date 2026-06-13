#include <iostream>
using namespace std;

class A {
  public:
    void show(){
      cout<< "Hello, World!"<< endl;
    }

    void show(int n){
      cout<< "Number: " << n << endl;
    }
};

int main(){
  A obj;
  obj.show();
  obj.show(5);
  
  int a = 10;
  int &ref = a;
  cout << ref << endl;
  return 0;
}