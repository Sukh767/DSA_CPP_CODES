#include <iostream>
#include <vector>
using namespace std;


//
int binarySearch(vector<int> &arr, int target) {
    int start = 0;
    int mid, end;
    end = arr.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            cout << "Return from mid" << endl;
            return mid;
        } else if (arr[start] == target) {
            cout << "Return from start" << endl;
            return start;
        } else if (arr[end] == target) {
            cout << "Return from end" << endl;
            return end;
        } else if (target > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

// Binary Search Algorithm using recursion 
int Binary_Recursion_Search(vector<int> &nums, int target, int start, int end){
    int mid = start + (end - start) / 2;
    if(start <= end){
        if(nums[mid] == target) return mid;
        if(nums[mid] < target) return Binary_Recursion_Search(nums, target, mid + 1, end);
        if(nums[mid] > target) return Binary_Recursion_Search(nums, target, start, mid - 1);
    }
    
    return -1;
}

//* Optimized Binary Search (works only on sorted arrays)  Complexity: O(log n)
int Binary_Search(vector<int> &nums, int target) {
    int left = 0, right = nums.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;  // Prevents overflow
        
        if (nums[mid] == target) {
            return mid;  // Target found
        } else if (nums[mid] < target) {
            left = mid + 1;  // Search right half
        } else {
            right = mid - 1; // Search left half
        }
    }
    return -1; // Target not found
}

// Linear Search (works on both sorted and unsorted arrays)
int LinearSearch(vector<int> &nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == target) {
            return i; // Target found
        }
    }
    return -1; // Target not found
}

int main() {
    vector<int> nums = {2, 4, 5, 7, 12, 26, 34};
    int target;

    cout << "Elements are: ";
    for (int ele : nums) {
        cout << ele << " ";
    }
    cout << "\nEnter number to be searched: ";
    cin >> target;

    // * Uncomment one method to use
    // int ans = LinearSearch(nums, target); // Use this for unsorted arrays
    //int ans = Binary_Search(nums, target);  // Use this for sorted arrays
    int ans = Binary_Recursion_Search(nums, target, 0, nums.size() - 1); // Use this for sorted arrays

    if (ans != -1) {
        cout << "Item found at index " << ans << " (position " << ans + 1 << ")\n";
    } else {
        cout << "Item not found in the list.\n";
    }

    return 0;
}
