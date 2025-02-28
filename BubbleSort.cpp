#include <iostream>
#include <vector>
using namespace std;

void BubbleSort(vector<int>& nums, int size) {
    bool swapped; // Optimization to break early if already sorted
    for (int i = 0; i < size - 1; ++i) {
        swapped = false; // Reset swapped flag before each pass
        for (int j = 0; j < size - i - 1; ++j) { // Reduce inner loop range
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]); // Swap elements
                swapped = true; // Mark as swapped
            }
        }
        if (!swapped) break; // If no swaps, array is already sorted
    }
}

int main() {
    vector<int> nums;
    int size, a;
    
    cout << "Enter the size of the Array: ";
    cin >> size;
    
    if (size <= 0) {
        cout << "Invalid array size. Exiting." << endl;
        return 1;
    }

    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> a;
        nums.push_back(a);
    }

    cout << "\nBefore Sorting: ";
    for (int ele : nums) {
        cout << ele << "  ";
    }
    cout << endl;

    // Call Bubble Sort function
    BubbleSort(nums, size);

    cout << "\nAfter Bubble Sort: ";
    for (int ele : nums) {
        cout << ele << "  ";
    }
    cout << endl;

    return 0;
}
