#include <iostream>
#include <string>
using namespace std;

class MathOperation {
public:
    // Overloaded add method for two integers
    void add(int a, int b) {
        cout << "Int: " << a + b << endl;
    }

    // Overloaded add method for one integer and one double
    void add(int a, double b) {
        cout << "Int + Double: " << a + b << endl;
    }
};

int main() {
    MathOperation m1; // Create an object of MathOperation
    MathOperation m2; // Create another object of MathOperation

    // Call the overloaded add methods
    m1.add(2, 3);          // Calls add(int, int)
    m2.add(2, 3.8778);     // Calls add(int, double)

    return 0;
}