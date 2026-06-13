#include <iostream>
using namespace std;

void square(int &a){
  a = a * a;
}

int main() {

  int a = 10;

  cout << "Before squaring a: " << a << endl;

  square(a);

  cout << "After squaring a: " << a << endl;

  return 0;
}