#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    char cont;
    do {
        //generate random pin
        cout << "Random 8-digit PIN: ";
        for (int i = 0; i < 8; ++i) {
            int dig = rand() % 10;
            cout << dig;
        }
        cout << endl;
        //ask the user if they want to generate more
        cout << "Do you want to generate another PIN? Y/N: ";
        cin >> cont;
    } while (cont != 'n' && cont != 'N'); //if the user does not enter either y or Y it should continue
    return 0;
}