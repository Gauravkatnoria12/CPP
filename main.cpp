#include <iostream>

using namespace std;

int main() {
    string name;
    
    cout << "Enter your name: ";
    getline(cin, name);

    string hobby;

    cout << "Enter Hobbies: ";
    getline(cin,  hobby);
    
    cout << "Hey! its C++!" << '\n';
    cout << "Hello! " << name  << '\n';
    cout << "Your Hobbies are: " << hobby  << '\n';

    string thanks = "Thank You.";
    cout << thanks << '\n';

    return 0;
}

