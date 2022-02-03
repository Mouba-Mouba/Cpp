#include <iostream>
using namespace std;
int main() {
    double wire;
    cout << "Enter length of wire (unit): ";
    cin >> wire;

    wire /= 2;
    double brea = wire / 2.5;
    double leng = wire - brea;

    cout << "Length of rectangular frame  = " << leng << " units" << endl;
    cout << "Breadth of rectangular frame = " << brea << " units" << endl;

    return 0;

}