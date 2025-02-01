#include <iostream>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while (n != 0) {
        if (n & 1) { // Check if the least significant bit is set
            count++;
        }
        n = n >> 1; // Shift bits to the right
    }
    return count;
}

int calculateSetBits(int a, int b) {
    // Count set bits in both numbers and return their sum
    return countSetBits(a) + countSetBits(b);
}

int main() {
    int a, b;
    cin >> a >> b;

    int ans = calculateSetBits(a, b);
    cout << ans << endl;
}
