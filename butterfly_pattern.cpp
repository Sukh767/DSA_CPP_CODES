#include <iostream>
using namespace std;

/*
Pattern Example for size = 5:

*       *
**     **
***   ***
**** ****
*********
**** ****
***   ***
**     **
*       *

*/

int main() {
    int size;
    cout << "Enter the size of the pattern: ";
    cin >> size;

    // Upper Part of the Pattern
    for (int i = 1; i <= size; i++) {
        // Print left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Print spaces
        for (int j = 1; j <= 2 * (size - i); j++) {
            cout << " ";
        }

        // Print right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower Part of the Pattern
    for (int i = size - 1; i >= 1; i--) {
        // Print left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Print spaces
        for (int j = 1; j <= 2 * (size - i); j++) {
            cout << " ";
        }

        // Print right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
