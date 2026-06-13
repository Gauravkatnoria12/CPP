#include <iostream>
using namespace std;

class MyClass{
public:
  static int count; // static member variable
  static void show() { // static member function
    count++;
    cout << count;
  }
};

int main(){
  MyClass::show();
  return 0;
}