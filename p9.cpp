/*
1 
2 1 
3 2 1 
4 3 2 1 
*/

#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the pattern: ";
    cin >> size;
    int row = 1;
    while(row <= size) {
        int col = 1;
        while(col <= row) {
            cout << row -col + 1<< " ";
            col++;
        }
        cout << endl;
        row++;
    }
}