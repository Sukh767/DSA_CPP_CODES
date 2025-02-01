#include<iostream>
using namespace std;


int findGCD(int a, int b){
    return 0;
}

int findGreatestCommonDivisor(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        cout<<b;
        a = temp;
    }
    return a;
}


int findGcD(int a, int b){
    int gcd=1;

    for(int i = 1; i<b; i++){
        if( (a % i) == 0 && (b % i) == 0 ){
            int temp = i;
            cout<<i;
            if(temp > gcd){
                gcd = temp;
            }
        }
    }

    return gcd;
}

int main(){
    int a,b;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;

    int ans = findGreatestCommonDivisor(a,b);
    cout<<"GCD of "<<a<<" and "<<b<<" is : "<<ans<<endl;
}