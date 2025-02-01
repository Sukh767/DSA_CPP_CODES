#include<iostream>
using namespace std;


//Anoher approach to find the unique element in the array using XOR
int findUniqueXOR(int arr[],int size){
    int unique = 0;
    for( int i = 0;i<size; i++){
        unique = unique^arr[i];
    }
    return unique;
}

// Function to find the unique element in the array
int findUnique(int arr[],int size){
    int unique = 0;
    for( int i = 0;i<size; i+=2){
        if(arr[i] != arr[i+1]){
            unique = arr[i];
            break;
        }
    }
    return unique;
}

void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sortingArray(int arr[], int size){
    for(int i = 0; i<size;i++){
        for(int j = i+1; j<size; j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {2, 3, 3, 7, 2, 9, 7, 9, 8};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"Array elements are: ";
    printArray(arr, size);
    //sortingArray(arr, size);
    //cout<<"Sorted Array elements are: ";
    //printArray(arr, size);
    //int unique = findUnique(arr, size);
    int unique = findUniqueXOR(arr, size);
    cout<<"Unique element is: "<<unique<<endl;
    
}