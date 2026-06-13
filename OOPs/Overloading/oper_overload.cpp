#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
    // Constructor to initialize real and imaginary parts
    Complex(float r = 0, float i = 0){
      real = r;
      imag = i;
    }

    // Overloading the + operator
    friend Complex operator+(const Complex& obj1, const Complex &obj2);

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

Complex operator+(const Complex &obj1, const Complex &obj2){
  return(Complex(obj1.real + obj2.real, obj1.imag + obj2.imag));
}

int main() {
    Complex c1(10, 5), c2(2, 4);
    c1.display();
    c2.display();
    // Using the overloaded + operator
    Complex c3 = c1 + c2; 
    
    cout << "Sum: ";
    c3.display(); // Output: 12 + 9i
    
    return 0;
}
