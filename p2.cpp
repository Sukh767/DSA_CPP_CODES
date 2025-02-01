#include<iostream>
using namespace std;

/*
54321
54321
54321
54321
54321
*/
int main(){
    int size;
    cout<<"Enter the size of the pattern: ";
    cin>>size;
    int i = 1;
    while(i <= size){
        int j = 1;
        while(j<=size){
            cout<<size-j+1;
            j++;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;

    // The above code can also be written as:
    for( int i = 1; i <= size; i++){
        for(int j = 1; j <= size; j++){
            cout<<size-j+1;
        }
        cout<<endl;
    }
}