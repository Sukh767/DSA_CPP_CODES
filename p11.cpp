#include<iostream>
using namespace std;

/*
A B C D E 
B C D E F 
C D E F G 
D E F G H 
E F G H I 

65 66 67 68 69 70 71 
66 67 68 69 70 71 72 
67 68 69 70 71 72 73 
68 69 70 71 72 73 74 
69 70 71 72 73 74 75 
70 71 72 73 74 75 76 
71 72 73 74 75 76 77 

int pt = (int)'A' + i + j - 2;
*/
int main(){
    int size;
    cout<<"Enter the size of the pattern: ";
    cin>>size;
    int row = 1;
    while(row<=size){
        int col=1;
        while(col<=size){
            char ch = 'A' + row + col - 2;
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }

    /* The above code can be written as follow */
    
    for(int i = 1; i <= size; i++){
        for(int j = 1; j <= size; j++){
            char pt = 'A' + i + j - 2;
            cout<< pt<<" ";
        }
        cout<<endl;
    }
}