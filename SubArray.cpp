#include <iostream>
using namespace std;

/*

{ 1 }
{ 1 2 }
{ 1 2 3 }
{ 1 2 3 4 }
{ 1 2 3 4 5 }

{ 2 }
{ 2 3 }
{ 2 3 4 }
{ 2 3 4 5 }

{ 3 }
{ 3 4 }
{ 3 4 5 }

{ 4 }
{ 4 5 }

{ 5 }

*/

void subArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {      // Start index of subarray
        for (int j = i; j < size; j++) {  // End index of subarray
            cout << "{ ";
            for (int k = i; k <= j; k++) { // Printing elements from i to j
                cout << arr[k] << " ";
            }
            cout << "}" << endl;
        }
        cout << endl;
    }
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);

    cout << "The Array is: " << endl;
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    cout << "The SubArrays are: " << endl;
    subArray(array, n);

    return 0;
}
