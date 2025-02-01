#include <iostream>
using namespace std;



void reverseArray(int nums[], int size){
    int start = 0;
    int end = size-1;

    while ( start < end ){
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start ++;
        end--;
    }
}

void printArray(int nums[], int size) {
    cout << "Array elements are:" << endl;
    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";  
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter the size of array container: ";
    cin >> size;

    int nums[size]; // Variable-length array

    // Insert elements into array
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> nums[i];
    }

    printArray(nums, size);

    // Calling reverse function
    reverseArray(nums,size);

    printArray(nums, size); // Pass the array and size to the function
}
