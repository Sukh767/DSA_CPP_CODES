#include<iostream>
using namespace std;

pair<int, int> Linear_search_on_two_D_matrix(int arr[][100], int row, int col, int key) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(arr[i][j] == key) {
                return {i, j}; // Return index position
            }
        }
    }
    return {-1, -1}; // Return -1, -1 if key is not found
}

int main() {
    int row, col;
    cout << "Enter the row size: ";
    cin >> row;
    cout << "Enter the column size: ";
    cin >> col;

    int arr[100][100]; // Fixed array size instead of variable-length array

    // Take input for the matrix
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << "Enter [" << i << "," << j << "] cell value: ";
            cin >> arr[i][j];
        }
    }

    cout << "The matrix is:\n";
    // Display the matrix
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << arr[i][j] << "   ";
        }
        cout << endl;
    }

    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    pair<int, int> result = Linear_search_on_two_D_matrix(arr, row, col, key);
    
    if (result.first != -1) {
        cout << "Key found at index: [" << result.first << "," << result.second << "]\n";
    } else {
        cout << "Key not found!\n";
    }

    return 0;
}
