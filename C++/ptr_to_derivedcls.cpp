#include <iostream>
using namespace std;

class Parent{
  private:
  string name;

  public:
  Parent(){
    name = "RBPU";
  }

  void disp(){
    cout << "College: " << name << endl;
  }
};

class Child: public Parent{
  private:
  string sname;

  public:
  Child(){
    sname = "Gaurav";
  }

  void show(){
    cout << "Student: " << sname << endl;
  }
};

int main(){
  Child *ptr = new Child();
  ptr -> disp();
  ptr -> show();
  return 0;
}