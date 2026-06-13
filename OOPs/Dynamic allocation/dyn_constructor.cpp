#include <iostream>
using namespace std;

class DC{
  public:
    int num;
    int *ptr;

    DC(int s){
      ptr = new int(s);
      cout<< "Memory Allocatd for integer, which has value: " << *ptr << '\n';
    }

    ~DC(){
      delete ptr;
      cout<< "Memory De-allocatd" << '\n';
    }
};

int main(){
  DC obj(5);
  return 0;
}