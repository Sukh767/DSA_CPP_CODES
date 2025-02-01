#include <iostream>
using namespace std;

// Function to display the elements of the array
void DisplayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to calculate and display the sum of the array
void SumOfArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "Array elements: ";
    DisplayArray(arr, n);
    cout << "Sum of array elements: " << sum << endl;
}

// Function to input array elements
void inputArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter the element at index " << i << ": ";
        cin >> arr[i];
    }
}

int main() {
    int arr[10] = {0};
    int n;

    // Input size of the array
    cout << "Enter the size of the array (max 10): ";
    cin >> n;

    // Validate the size
    if (n < 1 || n > 10) {
        cout << "Invalid size! Please enter a value between 1 and 10." << endl;
        return 1; // Exit the program
    }


    inputArray(arr, n);
    SumOfArray(arr, n);

    return 0;
}
