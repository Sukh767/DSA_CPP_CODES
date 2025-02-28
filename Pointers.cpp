#include<iostream>
using namespace std;


int Addition(int* ptr1, int* ptr2){
    int c = *ptr1 + *ptr2;
    return c;
}

int main(){
    int a = 12;
    int b = 23;
    cout<<Addition(&a,&b)<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
}