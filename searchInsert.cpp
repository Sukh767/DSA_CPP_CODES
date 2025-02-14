#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int i = 0;
    // Loop through the array
    while (i < nums.size()) {
        if (nums[i] == target) {
            return i;  
        } else if (nums[i] > target) {
            return i;  
        }
        i++;
    }
    return i;
}

int main() {
    vector<int> nums = {1, 3, 5, 6};
    cout << "Result is: " << searchInsert(nums, 4) << endl;

    return 0;
}
