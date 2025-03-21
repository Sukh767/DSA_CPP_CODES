#include <iostream>
using namespace std;


/*
* Public Inheritance:
    Public members of the base class become public in the derived class.
    Protected members of the base class become protected in the derived class.
    Private members of the base class are not accessible in the derived class.

* Protected Inheritance:
    Public and protected members of the base class become protected in the derived class.
    Private members of the base class are not accessible in the derived class.

* Private Inheritance:
    Public and protected members of the base class become private in the derived class.
    Private members of the base class are not accessible in the derived class.
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
// Base class (Parent)
class Base {
public:
    int publicVar = 1;       // Public member
protected:
    int protectedVar = 2;    // Protected member
private:
    int privateVar = 3;      // Private member (Not inherited)

public:
    void showBase() {
        cout << "Base Class: PublicVar = " << publicVar 
             << ", ProtectedVar = " << protectedVar 
             << ", PrivateVar is NOT accessible in derived classes." << endl;
    }
};

// -------- PUBLIC INHERITANCE --------
class PublicDerived : public Base {
public:
    void showPublicDerived() {
        cout << "Public Inheritance: " << endl;
        cout << "PublicVar: " << publicVar << " (Accessible)" << endl;
        cout << "ProtectedVar: " << protectedVar << " (Accessible)" << endl;
        // cout << privateVar; // ❌ ERROR: Private members are not inherited
    }
};

// -------- PROTECTED INHERITANCE --------
class ProtectedDerived : protected Base {
public:
    void showProtectedDerived() {
        cout << "Protected Inheritance: " << endl;
        cout << "PublicVar (now protected): " << publicVar << endl;
        cout << "ProtectedVar: " << protectedVar << endl;
        // cout << privateVar; // ❌ ERROR: Private members are not inherited
    }
};

// -------- PRIVATE INHERITANCE --------
class PrivateDerived : private Base {
public:
    void showPrivateDerived() {
        cout << "Private Inheritance: " << endl;
        cout << "PublicVar (now private): " << publicVar << endl;
        cout << "ProtectedVar (now private): " << protectedVar << endl;
        // cout << privateVar; // ❌ ERROR: Private members are not inherited
    }
};

int main() {
    PublicDerived objPublic;
    objPublic.showPublicDerived();
    objPublic.showBase();  // ✅ Allowed (inherits as public)

    ProtectedDerived objProtected;
    objProtected.showProtectedDerived();
    // objProtected.showBase();  // ❌ ERROR: showBase() is now protected

    PrivateDerived objPrivate;
    objPrivate.showPrivateDerived();
    // objPrivate.showBase();  // ❌ ERROR: showBase() is now private

    return 0;
}
