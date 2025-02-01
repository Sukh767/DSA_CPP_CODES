#include<iostream>
using namespace std;

/*
    1
   121
  12321
 1234321
123454321

*/
int main(){
    int size;
    cout<<"Enter the size of the pyramid: ";
    cin>>size;

    for(int i = 0; i<size; i++){
        
        // To print space " " [loop]
        for(int j = 0; j<size-i-1; j++){
            cout<<" ";
        }

        // To print left side pattern 
        for( int j = 1; j<=i+1; j++){
            cout<<j;
        }

        // To print right side of the pattern

        for(int k = i; k>=1; k--){
            cout<<k;
        }

        cout<<endl;
    }
}