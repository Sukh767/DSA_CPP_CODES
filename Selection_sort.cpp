#include<iostream>
#include<vector>
using namespace std;


void selection_sort(vector<int> &nums){
    int size = nums.size();

    for(int i = 0; i < size-1; i++){
        int small_index = i;

        for(int j = i+1; j < size-1; j++){
            if( nums[i] < nums[small_index] ){
                small_index = i;
            }
            swap(nums[i],nums[small_index]);
        }
        
    }

    cout<<"After Selection Sort (Time Complexity with O(n^2): " <<endl;
    for(int ele : nums){
        cout<<ele<<"  ";
    }
}


int main(){
    vector<int>nums = {4,1,5,2,3};
    cout<<"Before Sorting : "<<endl;
    for(int val : nums)
    cout<<val<<"  ";
    cout<<endl;
    selection_sort(nums);
    return 0;
}