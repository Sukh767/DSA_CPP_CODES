#include<iostream>
#include<limits.h>
using namespace std;


void findMinMax(int nums[], int size){
    int smallest = INT_MAX;
    int greatest = INT_MIN;

    for(int i = 0; i<size; i++){
       if(nums[i] < smallest){
        smallest = nums[i];
       }
       if(nums[i]>greatest){
        greatest = nums[i];
       }
    }

    cout<<"Maximum number is : "<<greatest<<endl;
    cout<<"Minimum number is : "<<smallest<<endl;
}

int main(){
    int nums[] = {2,3,6,22,8,9,21,1,7};
    int size = sizeof(nums)/sizeof(int);

   findMinMax(nums,size);

}