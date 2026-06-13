#include <iostream>
using namespace std;

void swap(int a, int b){
  int temp;
  temp = a;
  a = b;
  b = temp;
  cout << "values: " << a << b;
}

int main(){
  
  int a = 10;
  int b = 20;

  cout << "Before swapping a: " << a << " b: " << b << endl;
  swap(a, b);
  cout << "After swapping a: " << a << " b: " << b << endl;
  return 0;
}