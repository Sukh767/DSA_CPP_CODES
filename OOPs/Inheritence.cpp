#include <iostream>
using namespace std;


/*
Public Inheritance:
    Used when you want to maintain the same access levels as the base class.
    Example: class DerivedPublic : public Base.

Protected Inheritance:
    Used when you want to restrict access to public members of the base class in the derived class.
    Example: class DerivedProtected : protected Base.

Private Inheritance:
    Used when you want to make all inherited members private in the derived class.
    Example: class DerivedPrivate : private Base.

Access Rules:
    Private members of the base class are never accessible in the derived class, regardless of the inheritance mode.
*/

// Base (Parent) Class
class Base {
public:
    int publicVar = 10; // Public member

protected:
    int protectedVar = 20; // Protected member

private:
    int privateVar = 30; // Private member
};

// Public Inheritance
class DerivedPublic : public Base {
public:
    void display() {
        cout << "Public Inheritance:" << endl;
        cout << "Public Variable: " << publicVar << endl; // Accessible (public in derived class)
        cout << "Protected Variable: " << protectedVar << endl; // Accessible (protected in derived class)
        // cout << "Private Variable: " << privateVar << endl; // Error: Not accessible
    }
};

// Protected Inheritance
class DerivedProtected : protected Base {
public:
    void display() {
        cout << "\nProtected Inheritance:" << endl;
        cout << "Public Variable: " << publicVar << endl; // Accessible (protected in derived class)
        cout << "Protected Variable: " << protectedVar << endl; // Accessible (protected in derived class)
        // cout << "Private Variable: " << privateVar << endl; // Error: Not accessible
    }
};

// Private Inheritance
class DerivedPrivate : private Base {
public:
    void display() {
        cout << "\nPrivate Inheritance:" << endl;
        cout << "Public Variable: " << publicVar << endl; // Accessible (private in derived class)
        cout << "Protected Variable: " << protectedVar << endl; // Accessible (private in derived class)
        // cout << "Private Variable: " << privateVar << endl; // Error: Not accessible
    }
};

int main() {
    // Public Inheritance Example
    DerivedPublic objPublic;
    objPublic.display();
    cout << "Accessing publicVar from DerivedPublic object: " << objPublic.publicVar << endl; // Accessible (public)

    // Protected Inheritance Example
    DerivedProtected objProtected;
    objProtected.display();
    // cout << "Accessing publicVar from DerivedProtected object: " << objProtected.publicVar << endl; // Error: Not accessible (protected)

    // Private Inheritance Example
    DerivedPrivate objPrivate;
    objPrivate.display();
    // cout << "Accessing publicVar from DerivedPrivate object: " << objPrivate.publicVar << endl; // Error: Not accessible (private)

    return 0;
}

/*
Public Inheritance:
Public Variable: 10
Protected Variable: 20
Accessing publicVar from DerivedPublic object: 10

Protected Inheritance:
Public Variable: 10
Protected Variable: 20

Private Inheritance:
Public Variable: 10
Protected Variable: 20
*/