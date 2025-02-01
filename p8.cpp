#include<iostream>
using namespace std;

/*
1 
2 1 
3 2 1 
4 3 2 1 
 */
int main(){
    int size;
    cout<<"Enter the size of the pattern: ";
    cin>>size;
    int row = 1;
    while( row <= size){
        int col = 1;
            while( col <= row){
                cout<<row-col+1<<" ";
                
                col++;
            }
        cout<<endl;
        row++;
    }

    cout<<endl;
    
    //The above code can be written using `for` loop also

    for(int i = 1; i<=size; i++){
        for( int j = 1; j<= i; j++){
            cout<< i-j+1<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    //The above code can be written as with different logic

    for(int i = 1; i<= size; i++){
        for(int j = i; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}