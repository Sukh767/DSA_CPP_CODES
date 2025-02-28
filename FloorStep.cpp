#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

vector<int> generatePrimes(int floors) {
    vector<int> primes;
    for (int i = 2; i <= floors; i++) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }
    return primes;
}

int getNearestPrime(const vector<int>& primes, int targetFloor) {
    int lower = -1, upper = -1, sol = 0;

    for (int i = primes.size() - 1; i >= 0; i--) {
        if (primes[i] <= targetFloor) {
            lower = primes[i];
            break;
        }
    }

    for (int i = 0; i < primes.size(); i++) {
        if (primes[i] >= targetFloor) {
            upper = primes[i];
            break;
        }
    }

    sol = (abs(targetFloor - lower) <= abs(targetFloor - upper)) ? lower : upper;

    //cout<<sol;

    return sol;
}

int main() {
    int totalFloors, stepCount, targetFloor;
    cout << "Enter total floors: ";
    cin >> totalFloors;
    cout << "Enter steps per floor: ";
    cin >> stepCount;
    cout << "Select floor: ";
    cin >> targetFloor;

    vector<int> primeFloors = generatePrimes(totalFloors);
    for(int val : primeFloors){
        cout<<val<<"  ";
    }
    cout<<endl;
    int nearestFloor = getNearestPrime(primeFloors, targetFloor);
    int stepsNeeded = abs(targetFloor - nearestFloor) * stepCount;
    string direction = (targetFloor > nearestFloor) ? "Down" : (targetFloor < nearestFloor) ? "Up" : "Already on a prime floor";

    cout << "\nNearest prime floor: " << nearestFloor << endl;
    cout << "Steps required: " << stepsNeeded << endl;
    cout << "Direction: " << direction << endl;

    return 0;
}
