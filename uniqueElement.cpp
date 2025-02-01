#include <iostream>
using namespace std;

void findUniqueAndDuplicates(int nums[], int size) {
    bool checked[size] = {false}; // Array to track already processed elements

    for (int i = 0; i < size; i++) {
        if (checked[i]) continue; // Skip already processed elements

        int count = 1; // Start count at 1 for the current element

        for (int j = i + 1; j < size; j++) {
            if (nums[i] == nums[j]) {
                count++;
                checked[j] = true; // Mark duplicates as processed
            }
        }

        if (count == 1) {
            cout << "Unique element: " << nums[i] << endl;
        } else {
            cout << "Duplicate element: " << nums[i] << " (occurs " << count << " times)" << endl;
        }
    }
}

int main() {
    int nums[] = {1, 4, 2, 6, 4, 3, 1, 2, 1};
    int size = sizeof(nums) / sizeof(int);

    findUniqueAndDuplicates(nums, size);
    return 0;
}
