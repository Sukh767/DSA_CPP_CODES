#include<iostream>
using namespace std;

int calculateSetBits(int a, int b){
    int count = 0;
    // Calculate total set bits of 1
    while((a != 0) || (b != 0)){
        if((a & 1) == 1 || (b & 1) == 1){
            count++;
        }
        a = a >> 1; // Use right shift to process next bit
        b = b >> 1;
    }
    return count;
}

int main(){
    int a, b;
    cin >> a >> b;

    int ans = calculateSetBits(a, b);
    cout << ans << endl;
}
