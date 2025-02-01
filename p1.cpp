#include<iostream>
using namespace std;

/*
1 1 1 
2 2 2 
3 3 3 
4 4 4
*/

int main(){
    int size;
    cout<<"Enter the size of the square matrix: ";
    cin>>size;

int i = 1;
    while(i <= size){
        int j = 1;
        while(j<=size){
            cout<< i;
            cout<< " ";
            j++;
        }
        cout<<endl;
        i++;
    }

cout<<endl;
// The above code can be written using for loop as well

    for(int i = 1; i<= size; i++){
        for(int j = 1; j<= size; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}