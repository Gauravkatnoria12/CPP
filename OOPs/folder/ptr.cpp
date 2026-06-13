#include <iostream>
using namespace std;

int main(){
  int a = 20;
  int *const ptr = &a;

  cout<< "Values: " << endl;
  cout<<*ptr<< endl;
  cout<<a<< endl;

  cout<< endl << "Addresses: " << endl;
  cout<<&ptr<< endl;
  cout<<&a<< endl;

  // int b = 10;
  // ptr = &b;

  // cout<<*ptr<< endl;
  // cout<<b<< endl;

  // cout<<&ptr<< endl;
  // cout<<&b<< endl;
  // return 0;
}