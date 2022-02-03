#include <iostream>
using namespace std;
int main() {
    int arr[10];
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; ++i) {
        cin >> arr[i];
    }
    int key;
    cout << "Enter search number: ";
    cin >> key;
    //binary search
    int ans = -1;
    int l = 0, r = 9;
    while (l < r) {
        int mid = (l + r) /2;
        if (key == arr[mid]) {
            //num has been found
            ans = mid;
            break;
        }
        else if (key < arr[mid]) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    cout << "index = " << ans << endl;
    return 0;
}