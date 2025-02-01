#include<iostream>
using namespace std;

/*
*
**
***
****
*****
*/

int main(){
    int size;
    cout<<"Enter the size of the pattern: "
    cin>>size;
    int i = 1;
    while(i <= size){
        int j = 1;
    while (j <= i)
    {
        cout<<"*";
        j++;
    }
    cout<<endl;
    i++;
    }

    // The above code can be written as well using for loop: 

    for(int i = 1; i<= size; i++){
        for(j = 1; j<=i; j++){
            cout<<"*" ;
        }
        cout<<endl;
    }
    

}