#include<iostream>
using namespace std;

/*
D E F G 
C D E F 
B C D E 
A B C D 
*/
int main(){
    int size;
    cout<<"Enter the size of the pattern: ";
    cin>>size;
    int row = 1;
    while(row<=size){
        int col=1;
        char start = 'A' + size - row;
        while(col<=size){
            cout<<start<<" ";
            start++;
            col++;
        }
        cout<<endl;
        row++;
    }

    cout<<endl;

    //The above code logic can be written as follow:

    for(int i = 1; i <= size; i++){
        char pt = 'A' + size - i;  
        for(int j = 1; j<= size; j++){
            cout<<pt<<" ";
            pt++;
        }
        cout<<endl;
    }
}