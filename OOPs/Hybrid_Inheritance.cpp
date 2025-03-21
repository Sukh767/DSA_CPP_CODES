#include <iostream>
using namespace std;

// Base Class 1
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Base Class 2
class Mammal {
public:
    void breathe() {
        cout << "Mammal is breathing." << endl;
    }
};

// Derived Class 1 (Single Inheritance: Inherits from Animal)
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

// Derived Class 2 (Multiple Inheritance: Inherits from Animal and Mammal)
class Bat : public Animal, public Mammal {
public:
    void fly() {
        cout << "Bat is flying." << endl;
    }
};

int main() {
    // Single Inheritance Example
    Dog dog;
    cout << "Dog Actions:" << endl;
    dog.eat();  // Inherited from Animal
    dog.bark(); // Defined in Dog
    cout << endl;

    // Multiple Inheritance Example
    Bat bat;
    cout << "Bat Actions:" << endl;
    bat.eat();     // Inherited from Animal
    bat.breathe(); // Inherited from Mammal
    bat.fly();     // Defined in Bat

    return 0;
}


/*
Dog Actions:
Animal is eating.
Dog is barking.

Bat Actions:
Animal is eating.
Mammal is breathing.
Bat is flying.
*/