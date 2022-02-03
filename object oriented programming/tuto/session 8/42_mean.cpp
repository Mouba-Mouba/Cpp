#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int arr[5];
    cout << "Enter five integers: ";
    for (int i = 0; i < 5; ++i) {
        cin >> arr[i];
    }

    //sum all values
    double sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += arr[i];
    } 

    //mean of all values
    double mean = sum / 5;

    //standard deviation of all values
    double sd = 0; 
    for (int i = 0; i < 5; ++i) {
        sd += pow(arr[i] - mean, 2);
    }
    sd = sqrt(sd / 5);
    
    //print result
    cout << "Sum                = " << sum << endl; 
    cout << "Mean               = " << mean << endl;
    cout << "Standard deviation = " << sd << endl;
    return 0;
}