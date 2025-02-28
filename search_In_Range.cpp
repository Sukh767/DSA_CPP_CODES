#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int firstIndex = findFirstOccurrence(arr, target);
        int lastIndex = findLastOccurrence(arr, target);
        return {firstIndex, lastIndex};
    }

private:
    int findFirstOccurrence(vector<int>& arr, int target) {
        int index = -1;
        int start = 0;
        int end = arr.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == target) {
                index = mid; // Update index to the current mid
                end = mid - 1; // Continue searching in the left half
            } else if (arr[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return index;
    }

    int findLastOccurrence(vector<int>& arr, int target) {
        int index = -1;
        int start = 0;
        int end = arr.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == target) {
                index = mid; // Update index to the current mid
                start = mid + 1; // Continue searching in the right half
            } else if (arr[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return index;
    }
};


int main() {
    Solution solution;
    vector<int> arr = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> result = solution.searchRange(arr, target);
    cout << "First occurrence: " << result[0] << ", Last occurrence: " << result[1] << endl;
    return 0;
}