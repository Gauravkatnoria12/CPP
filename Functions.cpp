#include <iostream>

using namespace std;

double add(double x, double y) {
    return x + y;
}

int main(){
  double a, b;

  cout << "Enter first numbers: ";
  cin >> a;

  cout << "Enter second numbers: ";
  cin >> b;

  if(cin.fail()){
    cout << "Invalid input. Please enter integers only." << '\n';
    return 1;
  }
  cout << "Sum: " << add(a, b);


  cout << '\n' << '\n' << "Checking the type of num" << '\n' << '\n' ;

  cout << "Type of num : " << typeid(b).name() << '\n';
  cout << "Type of num : " << typeid(a).name() << '\n';
  return 0;
}


