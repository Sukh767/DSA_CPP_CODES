#include<iostream>
#include<vector>
using namespace std;

int peakIndexInMountainArray_Optimized(vector<int>& arr) {
    int st = 0, end = arr.size() - 1;

    while( st <= end){
        int mid = st + (end - st) / 2;
        if(arr[mid] > arr[mid + 1] && arr[mid] > arr[mid-1]){
            return mid;
        }

        if(arr[mid] < arr[mid + 1]){
            st = mid + 1;
        }else{
            end = mid - 1;
        }
    }

    return 0;
}

//Linear search technique 
// ? Time Complexity - O(N)
int peakIndexInMountainArray(vector<int>& nums) {
    for(int i = 1; i<nums.size()-1; i++){
        int val = nums[i];
        if(nums[i-1] < val && val> nums[i+1]){
            return i;
        }
    }

    return 0;
}

int main(){
    vector<int> nums = {0, 3, 8, 5, 2};
    cout<<"Peak Element is "<<peakIndexInMountainArray(nums)<<endl;

    cout<<"Peak Element is "<<peakIndexInMountainArray_Optimized(nums)<<endl;
}