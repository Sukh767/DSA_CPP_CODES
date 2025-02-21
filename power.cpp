#include<iostream>
using namespace std;

double myPow(double x, int n) 
{
    if(n == 0) return 1.0;
    if(x == 1) return 1.0;
    if(x == 0) return 0.0;
    if( x == -1 && n % 2 == 0) return 1.0;
    if( x == -1 && n % 2 != 0) return -1.0;

    long binary = n;
    double ans = 1;

    if(n<0){
        x = 1/x;
        binary = -binary;
    }

    while(binary > 0){
        if(binary % 2 == 1){
            ans *= x;
        }
        x *= x;
        binary /= 2;
    }

    return ans;
}


int power(){
    int a, b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;

    int ans = 1;

    for( int i = 1; i<= b; i++){
        ans =  ans * a;
    }

    return ans;
}

int main(){
    int x, b;
    cout<<"Enter the value of a and b: ";
    cin>>x>>b;
    int ans = power();
    double ans_myPow = myPow(x,b);
    cout<<"The asnwer is "<< ans<<endl;
    cout<<"The answer is "<<ans_myPow<<endl;
}