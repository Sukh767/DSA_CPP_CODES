#include<iostream>
#include<vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    vector<int>ans(2,-1);

    if(nums.size() < 1){
        return ans;
    }

    if(nums.size() == 1 && nums[0] == target){
        ans[0] = 0;
        ans[1] = 0;
        return ans;
    }else if(nums.size() == 1 && nums[0] != target){
        return ans;
    }

    int start = 0, end = nums.size() - 1;

    while(start <= end){
        int mid = start + (end - start) /2;

        if(nums[mid] == target && nums[mid+1] == target){
            ans[0] = mid;
            ans[1] = mid+1;
            return ans;
        } else if(nums[mid] == target && nums[mid-1] == target){
            ans[0] = mid-1;
            ans[1] = mid;
            return ans;
        }

        if(nums[mid] < target){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return ans;
}


// Brute force method -Time complexity O(N)
vector<int> search_Range(vector<int> &arr, int target){

    int firstIndex = -1;
    int lastIndex = -1;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == target){
            firstIndex = i;
            break;
        }
    }

    for(int i = arr.size() - 1; i >= 0; i--){
        if(arr[i] == target){
            lastIndex = i;
             return {firstIndex, lastIndex};
        }
    }
    return{-1,-1};
}

// Using Binary Search Technique - Time Complexity O(log n)
vector<int> search_Range_Binary(vector<int> &arr, int target){
    
}
int main(){
    vector<int> nums = {5,7,7,8,8,10};
    int target; 
    cout<<"Enter Your target value : ";
    cin>> target;
    vector<int> sol;
    
    sol = searchRange(nums, target);
    
    for(int i : sol){
        cout<<i<<" ";
    }
    
}