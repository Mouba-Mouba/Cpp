#include <iostream>
using namespace std;
int main(){
    int arr[5] = {4, 7, 2, 9, 1};
    cout << "arr[3]   = " << arr[3] << endl;
    cout << "*(arr+3) = " << *(arr+3) << endl;
    cout << "arr      = " << arr << endl;
    cout << "*(arr+10)= " << *(arr+10) << endl;
    return 0;
}