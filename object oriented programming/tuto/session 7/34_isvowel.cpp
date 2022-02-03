#include <iostream>
using namespace std;
bool isVowel(char c) {
    switch (c) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            return true;
        default:
            return false;

    }
}
int main()  {
    char c;
    int ans = 0;
    do {
        cout << "Enter a character: ";
        cin >> c;
        if (isVowel(c)) {
            ++ans;
        }
    } while (c != '0');
    cout << "No. of vowels in sequence = " << ans << endl;
    return 0;
}