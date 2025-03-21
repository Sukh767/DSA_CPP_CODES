#include <iostream>
using namespace std;

class Complex {
private:
    double real, imag;

public:
    // Constructor
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Display function
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }

    // Operator Overloading for '+'
    Complex operator+(const Complex &obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    // Operator Overloading for '-'
    Complex operator-(const Complex &obj) {
        return Complex(real - obj.real, imag - obj.imag);
    }

    // Operator Overloading for '=='
    bool operator==(const Complex &obj) {
        return (real == obj.real) && (imag == obj.imag);
    }

    // Operator Overloading for '++' (Prefix)
    Complex& operator++() {
        ++real;
        ++imag;
        return *this;
    }

    // Operator Overloading for '++' (Postfix)
    Complex operator++(int) {
        Complex temp = *this; // Save current state
        real++;
        imag++;
        return temp;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);

    // Addition
    Complex c3 = c1 + c2;
    cout << "Addition: ";
    c3.display();

    // Subtraction
    Complex c4 = c1 - c2;
    cout << "Subtraction: ";
    c4.display();

    // Equality Check
    cout << "Equality: ";
    cout << ((c1 == c2) ? "Equal" : "Not Equal") << endl;

    // Prefix Increment
    cout << "Prefix Increment: ";
    ++c1;
    c1.display();

    // Postfix Increment
    cout << "Postfix Increment: ";
    Complex c5 = c1++;
    c5.display();  // Old value
    c1.display();  // Updated value

    return 0;
}
