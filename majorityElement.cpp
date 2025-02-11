#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm> // For sort()

using namespace std;


/*
?Approach	 Time Complexity	Space Complexity	Remarks
 Brute Force	O(n²)	        O(1)	            Slowest, checks every pair
 Sorting-Based	O(n log n)	    O(n)	            Needs sorting but simpler
 Moore’s Voting	O(n)	        O(1)	            Best approach
*/

/*
 * Brute Force Approach (O(n^2))
 */
int majorityElement(const vector<int>& nums) {
    int major = floor(nums.size() / 2);

    for (int val : nums) {
        int count = 0;
        for (int ele : nums) {
            if (ele == val) {
                count++;
            }
        }
        if (count > major) {
            return val;
        }
    }
    return -1; // No majority element found
}

/*
 * Sorting-based approach (O(n log n))
 * The majority element will always be at the middle index after sorting.
 */
int Optimal_majorityElement(vector<int>& nums) {
    vector<int> res = nums; // Copy original array
    sort(res.begin(), res.end());

    int major = floor(res.size() / 2);
    int count = 1, key = res[0];

    for (int i = 1; i < res.size(); i++) { // Fix indexing issue
        if (res[i] == res[i - 1]) {
            count++;
        } else {
            count = 1;
            key = res[i];
        }

        if (count > major) {
            return key;
        }
    }
    
    return -1; // No majority element found
}

/*
 * Moore’s Voting Algorithm (O(n))
 */
int MooreMajorityElement(const vector<int>& nums) {
    int candidate = 0, count = 0;

    // Step 1: Find a potential majority candidate
    for (int num : nums) {
        if (count == 0) {
            candidate = num;
        }
        count += (num == candidate) ? 1 : -1;
    }

    // Step 2: Verify if the candidate is actually a majority element
    count = 0;
    for (int num : nums) {
        if (num == candidate) {
            count++;
        }
    }

    return (count > floor(nums.size() / 2)) ? candidate : -1;
}

int main() {
    vector<int> nums = {4, 4, 1, 4, 1, 4};

    cout << "The Given Array elements are: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    int result = majorityElement(nums);
    int result1 = Optimal_majorityElement(nums);
    int result2 = MooreMajorityElement(nums);

    if (result == -1) {
        cout << "Brute Force: No Majority Element found in the given Array." << endl;
    } else {
        cout << "Brute Force: The Majority Element in the given Array is: " << result << endl;
    }

    if (result1 == -1) {
        cout << "Sorting Approach: No Majority Element found in the given Array." << endl;
    } else {
        cout << "Sorting Approach: The Majority Element in the given Array is: " << result1 << endl;
    }

    if (result2 == -1) {
        cout << "Moore’s Voting Algorithm: No Majority Element found in the given Array." << endl;
    } else {
        cout << "Moore’s Voting Algorithm: The Majority Element in the given Array is: " << result2 << endl;
    }

    return 0;
}
