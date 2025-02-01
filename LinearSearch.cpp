#include<iostream>
using namespace std;


int linearSearch(int nums[], int size, int findElement){
    for(int i = 0; i<size; i++){
        if(nums[i] == findElement){
            return i;
        }
    }

    return -1;
}

int main(){
    int nums[] = {2,3,6,22,8,9,21,1,7};
    int size = sizeof(nums)/sizeof(int);
    int number;
    cout<<"Enter the number you want to search: ";
    cin>>number;

    int result = linearSearch(nums,size, number);

    if(result == -1){
        cout<<"Element not found in nums array."<<endl;
    } else {
        cout<<"Element found in array at index "<< result<<endl;
    }

}