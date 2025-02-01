#include<iostream>
using namespace std;

/*

      *
     **
    ***
   ****
  *****
 ******
******* 

*/
int main(){
    int size;
    cin>>size;
    int row = 1;

    while( row <= size){
        
    // Print Space part
    int space = size - row;
    while (space){
        cout<<" ";
        space--;
    } 

    //Print start '*' part 
    int col = 1;

    while(col <= row ){
        cout<<"*";
        col++;
    }
    cout<<endl;
    row++;
    }
}