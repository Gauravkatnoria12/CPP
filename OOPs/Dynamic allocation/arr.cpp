#include <iostream>
using namespace std;

class student{
  public:
    string name;
    int age;

    void putData(){
      cout<<"Enter name: ";
      cin>> name;

      cout << "Enter Age: ";
      cin>> age;
    }

    void showData(){
      cout<< "Student name: "<< name<< '\n';
      cout<< "Student Age: "<< age << '\n'<< '\n';
    }
};

int main(){
  int n;
  cout<< "Enter no. of Students: ";
  cin>> n;

  student *arr = new student[n];

  for(int i = 0; i < n; i++){
    cout<< "Enter the Details of Student "<< i+1 << endl;
    arr[i].putData();
  }
  
  cout<< '\n';

  for(int i = 0; i < n; i++){
    cout<< "Details of Student "<< i+1 << endl;
    arr[i].showData();
  }

  return 0;
}