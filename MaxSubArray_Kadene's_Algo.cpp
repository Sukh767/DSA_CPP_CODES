#include <iostream>
#include <climits>
using namespace std;

/*
?✅ Best case: O(n) (Linear time)
?✅ Worst case: O(n) (Still linear)
*/


/*
* Kadane's Algorithm works on a simple idea:
    We iterate through the array while keeping track of the maximum sum subarray seen so far.
    If at any point, the sum of the subarray becomes negative, we reset it to 0 (since a negative sum reduces the chances of getting a larger sum).
    We store the maximum sum encountered as we go
*/

int kadane(int arr[], int n) {
    int max_sum = INT_MIN; // Stores the max sum subarray
    int current_sum = 0;   // Current sum tracker

    for (int i = 0; i < n; i++) {
        current_sum += arr[i];
        max_sum = max(max_sum, current_sum); // Update max_sum

        if (current_sum < 0) {
            current_sum = 0; // Reset current sum if negative
        }
    }
    return max_sum;
}

int main() {
    int array[] = {3, -4, 5, 4, -1, 7, -8};
    int n = sizeof(array) / sizeof(array[0]);

    cout << "Max Sum of SubArray is: " << kadane(array, n) << endl;
    return 0;
}
