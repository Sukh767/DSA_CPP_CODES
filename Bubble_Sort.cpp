#include<iostream>
#include<vector>
using namespace std;


void optimized_bubble_sort(vector<int> &nums){
    int size = nums.size();

    for(int i = 0; i<size-1; i++){
       bool swapped = false;
        for(int j = 0; j<size-i-1; j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
                swapped = true;
            }
            if(!swapped) return;
        }
    }


    cout<<"After Optimized(Optimized Bubble sort) Sorting (Time Complexity with O(n^2): " <<endl;
    for(int ele : nums){
        cout<<ele<<"  ";
    }
}


void BubbleSort(vector<int> &nums){
    int size = nums.size();

    for(int i = 0; i < size-1; i++){
        for(int j = 0; j < size-i-1; j++){
            if(nums[j] > nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
    }

    cout<<"After Sorting (Time Complexity with O(n^2): " <<endl;
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
    //BubbleSort(nums);
    optimized_bubble_sort(nums);
    return 0;
}