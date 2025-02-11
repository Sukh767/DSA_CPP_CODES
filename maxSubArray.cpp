#include<iostream>
#include<climits>
using namespace std;

int maxSubArray(int array[], int size){
    int maxSum = INT_MIN;

    for(int i=0; i<size; i++){
        int sum = 0;
        for(int j = i;j<size; j++){
            sum += array[j];
            maxSum = max(maxSum, sum);        
        }
    }

    return maxSum;
}


int main(){
    int array[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(array)/sizeof(array[0]);

    
    cout<<"Max Sub Array sum is: "<<maxSubArray(array, n)<<endl;
}