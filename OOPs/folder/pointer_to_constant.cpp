#include <iostream>
using namespace std;

int main(){
  // const int a = 10;
  // const int *ptr = &a;

  // cout<< *ptr << endl;

  const int a = 50;
  const int *const ptr = &a;
  return 0;
}