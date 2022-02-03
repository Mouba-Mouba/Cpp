#include <iostream>
using namespace std;
int main() {
    int a = 300;
    int *aAddr;
    aAddr = &a;
    cout << "a      = " << a << endl;
    cout << "aAddr  = " << aAddr << endl;
    cout << "*aAddr = " << *aAddr << endl;
    return 0;

}