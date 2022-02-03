#include <iostream>

using namespace std;

int main()
{
    double wire, length, width;
    cout << "enter the length of wire : " ;
    cin >> wire;

    wire /=2;

    width = wire / 2.5;
    length = wire - width;

    cout << "Length of the picture frame : " << length << endl;
    cout << "Width of the picture frame : " << width << endl;

    return 0;
}
