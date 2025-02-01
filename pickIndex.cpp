
/* ---- 852. Peak Index in a Mountain Array-----*/

/*--- You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

Return the index of the peak element.

Your task is to solve it in O(log(n)) time complexity ---*/


#include<iostream>
using namespace std;

int main(){
    int arr[] = {0,10,5,2, 18, 4, 21, 5,6};
//Return the index of the peak element.

int start = 0;
int end = sizeof(arr)/sizeof(int) - 1;

while(start < end){
    int mid = (start + end)/2;
    if(arr[mid] > arr[mid+1]){
        end = mid;
    }else{
        start = mid + 1;
    }
}

}