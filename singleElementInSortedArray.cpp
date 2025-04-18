#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        int singleNonDuplicate(vector<int>& nums) {
    
            if(nums.size()<2) return nums[0]; 
            if(nums[0] != nums[1]) return nums[0];
            if(nums[nums.size()-1] != nums[nums.size()-2]) return nums[nums.size()-1];
            
            for(int i = 1; i < nums.size() - 1; i++){
                if(nums[i] != nums[i-1] && nums[i] != nums[i+1]) return nums[i];
            }
            return 0;
        }
};


int main(){
    vector<int> nums = {3,3,7,7,10,11,11};
    Solution s1;

    int ans =  s1.singleNonDuplicate(nums);

   cout<<"Single Element is : " <<ans<<endl;
   return 0;
}