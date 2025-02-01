#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Vector initialization
    vector<int> nums = {1, 2, 3, 4, 5};
    vector<char> vec(5, 'A');

    // `ForEach` loop to access the vector values
    cout << "Elements in nums vector: ";
    for (int value : nums) {
        cout << value << " ";
    }
    cout << endl;

    cout << "Elements in vec vector: ";
    for (char val : vec) {
        cout << val << " ";
    }
    cout << endl;

    // Vector functions

    // size - gives the size of the vector
    int size_nums = nums.size();
    int size_vec = vec.size();
    cout << "Size of nums vector: " << size_nums << endl;
    cout << "Size of vec vector: " << size_vec << endl;

    // push_back - adds an element to the end of the vector
    nums.push_back(6);
    vec.push_back('B');
    cout << "After push_back:" << endl;
    cout << "nums vector: ";
    for (int value : nums) {
        cout << value << " ";
    }
    cout << endl;
    cout << "vec vector: ";
    for (char val : vec) {
        cout << val << " ";
    }
    cout << endl;

    // pop_back - removes the last element of the vector
    nums.pop_back();
    vec.pop_back();
    cout << "After pop_back:" << endl;
    cout << "nums vector: ";
    for (int value : nums) {
        cout << value << " ";
    }
    cout << endl;
    cout << "vec vector: ";
    for (char val : vec) {
        cout << val << " ";
    }
    cout << endl;

    // insert - inserts an element at a specific position
    nums.insert(nums.begin() + 2, 10); // Insert 10 at index 2
    vec.insert(vec.begin() + 1, 'C'); // Insert 'C' at index 1
    cout << "After insert:" << endl;
    cout << "nums vector: ";
    for (int value : nums) {
        cout << value << " ";
    }
    cout << endl;
    cout << "vec vector: ";
    for (char val : vec) {
        cout << val << " ";
    }
    cout << endl;

    // erase - removes an element at a specific position
    nums.erase(nums.begin() + 2); // Erase element at index 2
    vec.erase(vec.begin() + 1);  // Erase element at index 1
    cout << "After erase:" << endl;
    cout << "nums vector: ";
    for (int value : nums) {
        cout << value << " ";
    }
    cout << endl;
    cout << "vec vector: ";
    for (char val : vec) {
        cout << val << " ";
    }
    cout << endl;

    // clear - removes all elements from the vector
    nums.clear();
    vec.clear();
    cout << "After clear:" << endl;
    cout << "nums vector size: " << nums.size() << endl;
    cout << "vec vector size: " << vec.size() << endl;

    return 0;
}


                                            /* OUTPUT */    
/*
Elements in nums vector: 1 2 3 4 5 
Elements in vec vector: A A A A A 
Size of nums vector: 5
Size of vec vector: 5
After push_back:
nums vector: 1 2 3 4 5 6 
vec vector: A A A A A B 
After pop_back:
nums vector: 1 2 3 4 5 
vec vector: A A A A A 
After insert:
nums vector: 1 2 10 3 4 5 
vec vector: A C A A A A 
After erase:
nums vector: 1 2 3 4 5 
vec vector: A A A A A 
After clear:
nums vector size: 0
vec vector size: 0
 */