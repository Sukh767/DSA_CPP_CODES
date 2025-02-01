#include<iostream>
using namespace std;

int main(){
    char a;
    cout<<"Enter a character: ";
    cin>>a;

    // Check if the character is small letter or not
    /* 
    if(a >= 65 && a<=90){
        cout<<"The character is a capital letter."<<endl;
    }  
    */
    if(a>='a' && a<='z'){
        cout<<"The character is a small letter."<<endl;
    }
    else{
        cout<<"The character is not a small letter."<<endl;
    }

    // ternary operator
    (a>='a' && a<='z') ? cout<<"The character is a small letter."<<endl : cout<<"The character is not a small letter."<<endl;


}