
/*
----------------------Another method--------------
#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the pattern: ";
    cin>>size;
    int row = 1;
    while( row <= size){
int col = 1;
            int value = row;
        while( col <= row){
            cout<<value<<" ";
            value++;
            col++;
        }
        cout<<endl;
        row++;
    }

}
*/
#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the pattern: ";
    cin >> size;
    int row = 1;
    while(row <= size) {
        int col = 1;
        while(col <= row) {
            cout << row + col - 1 << " ";
            col++;
        }
        cout << endl;
        row++;
    }

    cout<<endl;
    
    //The above code can be written using `for` loop as well

    for(int i = 1; i<=size; i++){
        for(int j = 1; j<= i; j++){
            cout<<i + j - 1 << " ";
        }
        cout<<endl;
    }
}

/*
1 
2 3 
3 4 5 
4 5 6 7 
*/