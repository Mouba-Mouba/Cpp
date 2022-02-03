#include <iostream>
#include <string>
using namespace std;

int main()
{
    string mounth;

    cout << "This program prints the number of days in a month" << endl;
    cout << "Enter the name of a month: ";
    cin >> mounth;
    if(mounth == "January" || mounth == "March" || mounth == "Mai" || mounth == "Jullay" || mounth == "September" || mounth == "Novermber" || mounth == "December")
        cout << "No. of days in " << mounth << " is 31" << endl;
    else if (mounth == "Febrary")
        cout << "No. of days in " << mounth << " is 28" << endl;
    else
        cout << "No. of days in " << mounth << " is 30" << endl;
    return 0;
}
