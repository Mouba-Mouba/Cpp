#include <iostream>

using namespace std;

int main()
{
    int n , an , a0 , d;

    cout << "This program prints the nth element of an arithmetic progression\n";

    cout << "Enter the first element:  ";
    cin >> a0;

    cout << "Enter the common difference:  ";
    cin>> d;

    cout << "Enter the value of n :  ";
    cin >> n;

      an = a0 + (n-1) * d;

    cout << "The nth element of the arithmetic progression is " << an << endl;

    return 0;
}
