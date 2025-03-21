#include <iostream>
#include <string>
using namespace std;

class Number {
public:
    int n;

    // Constructor to initialize n
    Number(int set_n = 0) : n(set_n) {}

    // Operator Overloading for '+'
    Number operator+(const Number &numA) const {
        cout << "this->n: " << this->n << endl;
        cout << "numA.n: " << numA.n << endl;

        // Return a new Number object with the sum of n and numA.n
        return Number(this->n + numA.n);
    }
};

int main() {
    Number a(10); // Create object a with n = 10
    Number b(9);  // Create object b with n = 9

    // Use the overloaded '+' operator
    Number c = a + b;

    // Display the result
    cout << "c.n: " << c.n << endl;

    return 0;
}