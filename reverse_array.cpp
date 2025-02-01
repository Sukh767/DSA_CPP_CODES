// objective: To reverse the array elements within the same array

#include <iostream>
using namespace std;

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}


void reverse_array(int arr[],int size){
    int start = 0;
    int end = size-1;
    
    while(start<=end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

}


int main()
{
    int arr[] = {22, 3, 5, 2, 1, 4, 6, 7, 8, 9, 11};

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    print_array(arr, size);
    cout << endl;
    
    reverse_array(arr,size);
/*
    // Reverse the array
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
*/
    cout << "Reversed Array: ";
    print_array(arr, size);
    cout << endl;

    return 0;
}
