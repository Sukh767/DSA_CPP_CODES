#include<iostream>
using namespace std;
/*
A A A A A A A 
B B B B B B B 
C C C C C C C 
D D D D D D D 
E E E E E E E 
F F F F F F F 
G G G G G G G 
*/
int main(){
    int size;
    cout<<"Enter the size of the pattern: ";
    cin>>size;

    int row = 1;
    while(row <= size){
        int col = 1;
        while(col<=size){
            char ch = 'A' + row - 1;
            cout<< ch;
            cout<< " ";
            col++;
        }
        cout<<endl;
        row++;
    }

    //The above code can be written using `for` loop also

    for(int i = 1; i <= size; i++){
        for(int j=1; j<=i; j++){
            char printer = 'A' + i - 1;
            cout<<printer<<" ";
        }
        cout<<endl;
    }
}