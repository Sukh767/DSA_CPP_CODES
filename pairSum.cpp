#include <iostream>
#include <vector>
using namespace std;

/* 
 * Brute force approach to find a pair of elements in an array that sum up to a given target.
 * Time complexity: O(n^2).
 */
vector<int> PairSum(const vector<int>& array, int target) {
    for (size_t start = 0; start < array.size(); start++) {
        for (size_t end = start + 1; end < array.size(); end++) {
            if (array[start] + array[end] == target) {
                return {static_cast<int>(start), static_cast<int>(end)};
            }
        }
    }
    return {}; // Return empty vector if no pair is found
}

/*
 * Optimal solution using the two-pointer technique.
 * Assumes the input array is sorted.
 * Time complexity: O(n).
 */
vector<int> OptimalPairSum(const vector<int>& array, int target) {
    int left = 0, right = array.size() - 1;
    
    while (left < right) {
        int sum = array[left] + array[right];
        if (sum == target) {
            return {left, right}; 
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return {}; // Return empty vector if no pair is found
}

int main() {
    vector<int> array = {4, 5, 6, 7, 8, 9};
    int target;
    
    cout << "Enter the target sum: ";
    cin >> target;

    vector<int> bruteForceResult = PairSum(array, target);
    vector<int> optimalResult = OptimalPairSum(array, target);

    if (!bruteForceResult.empty()) {
        cout << "Brute Force: Pair found at index " 
             << bruteForceResult[0] << " and " << bruteForceResult[1] << endl;
    } else {
        cout << "Brute Force: No pair found" << endl;
    }

    if (!optimalResult.empty()) {
        cout << "Optimal: Pair found at index " 
             << optimalResult[0] << " and " << optimalResult[1] << endl;
    } else {
        cout << "Optimal: No pair found" << endl;
    }

    return 0;
}
