#include<iostream>
#include<vector>
using namespace std;


int find_singleElement_IN_sorted_array(vector<int> &nums){
    int size = nums.size();

    //Edge case
    if(size == 1){
        return nums[0];
    }

    int st=0,end=size-1;

    while(st <= end){
        int mid = st + (end - st) / 2;

        //Edge Case-------------------
        if(mid == 0 && nums[mid] != nums[mid+1]) return nums[mid];
        if(mid == size-1 && nums[mid] != nums[mid - 1]) return nums[mid];

        if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]) return nums[mid];

        //Check for Even or Odd
        if(mid % 2 == 0) {

            if(nums[mid] == nums[mid - 1]){
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        } else{
            if(nums[mid] == nums[mid - 1]){
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }

    return -1;
}


int main(){
    vector<int>nums = {1,1,2,2,5,6,6,8,8};
    int ans = find_singleElement_IN_sorted_array(nums);

    if(ans) {
        cout<<"Unique Element is : " << ans;
    } else {
        cout<<"Not found";
    }

    return 0;
}