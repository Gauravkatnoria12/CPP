#include <iostream>
using namespace std;

class Parent{
public:
    void display(){
        cout<<"This is the parent class"<<endl;
    }
};

class Child : public Parent{
};

class Child2 : public Parent {
};

int main(){
    Child p;
    p.display();
    return 0;
}