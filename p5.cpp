#include<iostream>
using namespace std;

/*
1
22
333
4444
55555
*/

int main(){
    int size;
    cout<<"Enter the size of the pattern: ";
    cin>>size;
    int row = 1;
    while( row <= size){
        int col = 1;
        while(col <= row){
            cout<<row;
            col++;
        }
        cout<<endl;
        row++;
    }

    //The above code logic can be written as well in `for` Loop also

    for(int i = 1; i<=size; i++){
        
        for(int j = 1; j<=i; j++){
            cout<<i;
        }
        cout<<endl;
    }

}