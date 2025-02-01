#include<iostream>
using namespace std;

/*
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
*/

int main(){
    int size;
    cout<<"Enter the size of the pattern: ";
    cin>>size;
    int row = 1,count = 1;
    while( row <= size){
        int col = 1;
        while(col <= row){
            cout<<count<<" ";
            count++;
            col++;
        }
        cout<<endl;
        row++;
    }

    //The above code can also be written using `for` loop
    cout<<endl;

    int freq = 1;
    for(int i = 1; i <= size ; i++){
        for(int j = 1; j<=i; j++){
            cout<< freq << " ";
            freq++;
        }
        cout<<endl;
    }

}