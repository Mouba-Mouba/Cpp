#include <iostream>
using namespace std;

void checkPrime(int n) {
    if (n == 1) {
        cout << "1 is neither prime or composite" << endl;
    }
    else {
        
        bool isPrime = true;
        for (int i = 2; i < (n / 2 + 1); ++i) {
            if (n % i == 0) {
                isPrime = false;
            }
        }
        if (isPrime) {
            cout << n  << " is a prime number" << endl;
        }
        else {
            cout << n << " is a composite number" << endl;
        }
    }
}

int main() {
    checkPrime(2);
    checkPrime(17);
    checkPrime(46);
    checkPrime(100);
    return 0;
}