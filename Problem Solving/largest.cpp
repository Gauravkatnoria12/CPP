#include <iostream>
using namespace std;

int main(){
  int a =20, b=8, c=4;
  if(a > b & a > c){
    cout<< "largest no. is a  : " << a << endl;
  }
  else if( b > a & b > c){
    cout<< "largest no. is b : " << b << endl;
  }
  else{
    cout<< "largest no. is c :" << c << endl;
  }
  return 0;
}