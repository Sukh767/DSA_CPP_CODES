#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 7}; // Array with one duplicate
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate size of the array

    int ans = 0;

    // XOR all elements in the array
    cout << "XORing array elements:\n";
    for (int i = 0; i < n; i++) {
        ans = ans ^ arr[i];
        cout << "Step " << i + 1 << ": ans = " << ans << " (after XOR with " << arr[i] << ")\n";
    }

    // XOR with all numbers from 1 to n-1
    cout << "\nXORing with numbers from 1 to " << n - 1 << ":\n";
    for (int i = 1; i <= n - 1; i++) {
        ans = ans ^ i;
        cout << "Step " << i << ": ans = " << ans << " (after XOR with " << i << ")\n";
    }

    cout << "\nDuplicate number is: " << ans << endl;

    return 0;
}
