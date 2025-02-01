#include <iostream>
using namespace std;

// Function to convert binary to decimal
int convertToDecimal(int number) {
    int ans = 0;
    int power = 1; // Start with 2^0 = 1

    while (number != 0) {
        int rem = number % 10; // Get the last digit (binary bit)
        number = number / 10;  // Remove the last digit
        ans += rem * power;    // Add the contribution of the current bit
        power *= 2;            // Increment the power of 2 (2^n)
    }

    return ans;
}

// Function to convert decimal to binary
int convertToBinary(int number) {
    int ans = 0;    // Initialize the binary result
    int power = 1;  // Start with the least significant bit (10^0)

    while (number > 0) {
        int rem = number % 2;  // Get the remainder (0 or 1)
        number = number / 2;   // Reduce the number
        ans += rem * power;    // Add the binary digit at the correct place
        power *= 10;           // Move to the next place value in binary
    }

    return ans;
}

int main() {
    int number, range, dec;

    // Input range and numbers
    cout << "Enter range: ";
    cin >> range;
    cout << "Enter number to convert to Binary: ";
    cin >> number;
    cout << "Enter Binary number to convert to Decimal: ";
    cin >> dec;

    // Print binary conversions for numbers in the range
    for (int i = 1; i <= range; i++) {
        int ans = convertToBinary(i);
        cout << i << " : " << ans << endl;
    }

    // Convert a specific decimal to binary
    int binaryResult = convertToBinary(number);

    // Convert a specific binary to decimal
    int decimalResult = convertToDecimal(dec);

    // Print results
    cout << "The Binary representation of " << number << " is: " << binaryResult << endl;
    cout << "The Decimal equivalent of " << dec << " is: " << decimalResult << endl;

    return 0;
}
