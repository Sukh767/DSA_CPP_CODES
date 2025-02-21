// Online C++ compiler to run C++ program online


/*
? Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

? The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

? You must write an algorithm that runs in O(n) time and without using the division operation.

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
*/
#include <iostream>
#include<vector>
using namespace std;

// * These is brute force approach time complexity O(n2)
vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> digits;
        for(int i = 0; i<nums.size(); i++){
            int product  = 1;
            for(int j = 0; j < nums.size(); j++){
                if( j != i){
                    product = product * nums[j];
                }
            }
            digits.push_back(product);
        }

        return digits;
}

/*
? Optimize Solution O(N)
*/

vector<int> productExceptSelf(vector<int>& nums) {
    int size = nums.size();
    vector<int> answer(size,1);

    //This loop calculate prefix ans store in ans array;  [1,1,2,6]
    for(int i = 1; i < size; i++){
        answer[i] = answer[i-1] * nums[i-1];
    }
    int right = 1;     //Take `right` as extra variable to store the calculate suffix value

    for(int i = size-2; i >= 0; i--){
       right *= nums[i+1];   //ex- 1 * 4 =4; 4 * 3 = 12; 
       answer[i] *= right;   //ans[1,1,2,6]  --> ans[2] = 2 (ans[2]) * 4 (right) = 8; -> ans[1,1,8,6];
    }

    return answer;
}

int main() {
    // Write C++ code here
    vector<int> nums = {1,2,3,4};
    
    
    for(int ele : nums){
        cout<<ele<<" ";
    }
    vector<int> ans = productExceptSelf(nums);
    cout<<endl;
    for(int ele : ans){
        cout<<ele<<" ";
    }

    return 0;
}