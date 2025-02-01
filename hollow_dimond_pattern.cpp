#include<iostream>
using namespace std;

/*

    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *
*/

int main(){
    int size;
    cout<<"Enter the size of Dianmond Pattern: ";
    cin>>size;

    for(int i=0; i<size; i++){

        //To Print space in the first
        for(int j=0; j<size-i-1; j++){
            cout<<" ";
        }

        // Print * 
        cout<<"*";

        if(i != 0){
            for(int k=0; k<2*i-1; k++){
                cout<<" ";
                
            }
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=0; i<size-1; i++){
        for(int j=0; j<i+1; j++){
            cout<<" ";
        }
        cout<<"*";

        if(i != size-2){
            for(int j=0; j<2*(size-i)-5; j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }

}