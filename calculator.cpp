#include <iostream>
using namespace std;

int main() {

  while (true) {
    int choice, a, b;
    cout << "------ Menu Driven Calculator ------" << '\n' << '\n';
    cout << "# Enter 1 for Addition" << '\n';
    cout << "# Enter 2 for Subtraction" << '\n';
    cout << "# Enter 3 for Multiplication" << '\n';
    cout << "# Enter 4 for Division" << '\n';
    cout << "# Enter 5 for Exit..." << '\n';

    cout << "\nEnter your Choice: ";
    cin >> choice;

    switch (choice) {
      case 1:
        cout << "\nEnter first Number: ";
        cin >> a;
        cout << "Enter second Number: ";
        cin >> b;
        cout << "\n@ Sum: " << a+b << '\n' << '\n'; break;

      case 2:
        cout << "\nEnter first Number: ";
        cin >> a;
        cout << "Enter second Number: ";
        cin >> b;
        cout << "\n@ Subtraction: " << a-b << '\n' << '\n'; break;

      case 3:
        cout << "\nEnter first Number: ";
        cin >> a;
        cout << "Enter second Number: ";
        cin >> b;
        cout << "\n@ Multiplication: " << a*b << '\n' << '\n'; break;

      case 4:
        cout << "\nEnter first Number: ";
        cin >> a;
        cout << "Enter second Number: ";
        cin >> b;
        if (b != 0){
          cout << "\n@ Division: " << a/b << '\n' << '\n';
        }
        else {
          cout << '\n' << "\nZero division not possible.\n" << '\n';
        }
        break;

      case 5: 
        cout << "\nProgram exited..." << '\n' << '\n';
        exit(0);
        break;

      default: 
        cout << "\nInvalid Operator.\n"; break;
    }

  }

}