
#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size){
    //for(int i=0; i<size-1; i+=2){swap(arr[i], arr[i+1]);}
    for(int i=0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i], arr[i+1]);
        }
    }
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1,3,5,7,3,2,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    printArray(arr, size);
    cout<<endl;
    swapAlternate(arr, 7);
    cout<<endl;
    printArray(arr, size);
}