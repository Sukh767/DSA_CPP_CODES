#include<iostream>
using namespace std;


bool checkPrime(int number){
    if ( number == 0 ){
        return false;
    }

    for( int i = 2; i < number; i++){
        if( number % i == 0){
            return false;
        }
    }

    return true;
}
int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;

    bool ans = checkPrime(number); 
    if(ans){
        cout<<"The number is prime"<<endl;
    }else{
        cout<<"The number is not prime"<<endl;
    }
}

/*

class Solution {
public:
    bool checkPrime(int number) {
        if (number <= 1) return false; // Numbers <= 1 are not prime
        if (number == 2) return true; // 2 is the only even prime number
        if (number % 2 == 0) return false; // Other even numbers are not prime

        for (int i = 3; i * i <= number; i += 2) { // Check divisors up to sqrt(number)
            if (number % i == 0) return false; // If divisible, it's not a prime
        }
        return true; // If no divisors found, it's a prime
    }

    int countPrimes(int n) {
        int count = 0;

        for (int i = 2; i < n; i++) {
            if (checkPrime(i)) {
                count++;
            }
        }

        return count;
    }
};


class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0; // No primes less than 2
        
        // Create a boolean array to mark primes
        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime
        
        // Apply the Sieve of Eratosthenes
        for (int i = 2; i * i < n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false; // Mark multiples as non-prime
                }
            }
        }
        
        // Count the primes
        int count = 0;
        for (int i = 2; i < n; i++) {
            if (isPrime[i]) count++;
        }
        return count;
    }
};


*/