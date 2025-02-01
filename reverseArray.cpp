//onjective: Reverse an array

#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 8, 3, 4, 5, 6, 7, 8, 9, 10};
    int rev_arr[10];
    int size = sizeof(arr) / sizeof(arr[0]);
    int j = 0;

    cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Reverse array into rev_arr
    for (int i = size - 1; i >= 0; i--) {
        rev_arr[j] = arr[i];
        j++;
    }

    cout << "Reversed Array: ";
    for (int i = 0; i < size; i++) {
        cout << rev_arr[i] << " ";
    }
    cout << endl;

    return 0;
}
