#include <iostream>

using namespace std;

int main()
{
    int num, result;
    cout << "This program prints multiplication tables" << endl;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Multiplication table for " << num << endl;
    for (int i=1; i<=10; i++){
        result = 8*i;
       cout << "8 * " << i << " = " << result << endl;
    }
    return 0;
}
