#include <iostream>
#define GST 0.006
#define CHG 0.05
using namespace std;
int main() {
    double price;

    cout << "Enter food bill in RM : ";
    cin >> price;

    double totBill = price + price * GST + price * CHG;

    cout << "Total bill = RM " << totBill << endl;
    return 0; 
}