#include<iostream>
using namespace std;


                                            /* Inverted triangle pattern */
int main(){
    int size;
    cout<<"Enter size of the pattern: ";
    cin>>size;

    /* 
    1 1 1 1 1 
    2 2 2 2 2 
    3 3 3 3 3 
    4 4 4 4 4 
    5 5 5 5 5 
    */
    for(int i = 1; i <= size; i++){
        for(int j = size; j >= 1; j--){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    /*
11111
 2222
  333
   44
    5
    */

    for(int i = 0; i < size; i++){
        for(int j = 0; j < i; j++){
                cout<<" ";
        }

        for(int k = 0; k < size-i; k++){
            cout<<i+1;
        }
        cout<<endl;
    }
}