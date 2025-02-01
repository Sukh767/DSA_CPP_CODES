#include<iostream>
using namespace std;


int factorial(int n){
    int ans = 1;

    for (int i = 1; i<=n; i++){
        ans = ans * i;
    }

    return ans;
}

int nCr(int n, int r){
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n-r);
    int ans = numerator / denominator;
    return ans;

}
int main(){
    int n, r;
    cout<<"Enter the value of n and r: ";
    cin>>n>>r;

    int ans = nCr(n, r);
    cout<<"The answer is "<< ans<<endl;
}