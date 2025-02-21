
// Objective: To search an element in an array using linear search algorithm

#include<iostream>
using namespace std;

bool linear_search(int arr[], int size, int key){
    for(int i = 0; i <size; i++){

        if( arr[i] == key){
            return 1;
        }
    }

    return 0;
}
int main(){

    int arr[10]={-2, 4, 1, 7, 4, 3, -9, 0, 5, 6};

    int key;
    cout<<"Enter the element to search in the array:"<<endl;

    cin>>key;

    int search_result = linear_search(arr, 10, key);

    if(search_result){
        cout<<"Element found in the array"<<endl;
    }else{
        cout<<"Element not found in the array"<<endl;
    }

}