#include <iostream>
using namespace std;

// Function to print elements of an array
void print_array(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

// Function to find the intersection of two arrays
void intersectionOfArray(int nums[], int nums_two[], int size_num, int size_nums_two) {
    cout << "Intersection of the arrays is: ";
    for (int i = 0; i < size_num; i++) {
        for (int j = 0; j < size_nums_two; j++) {
            if (nums[i] == nums_two[j]) {
                cout << nums[i] << " ";
                break; // To avoid printing the same element multiple times
            }
        }
    }
    cout << endl;
}

int main() {
    int nums[] = {3, 2, 5, 4, 1};
    int nums_two[] = {6, 7, 3, 5, 4};

    int size_nums = sizeof(nums) / sizeof(int);
    int size_nums_two = sizeof(nums_two) / sizeof(int);

    cout << "First container elements are: " << endl;
    print_array(nums, size_nums);

    cout << "Second container elements are: " << endl;
    print_array(nums_two, size_nums_two);

    intersectionOfArray(nums, nums_two, size_nums, size_nums_two);

    return 0;
}
