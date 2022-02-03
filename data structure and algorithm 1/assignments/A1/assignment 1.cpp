#include <iostream>

using namespace std;

int main()
{
    short int dozen[] = {29, 3, 4, 5, 0, 21, 11, 5, 7, 32, 74, 41};
    cout<< "The contents of dozen indexed by 1 and 7 are: ";
    cout<< dozen[1] << " and " << dozen[7]<< endl;
    cout<< endl;
    cout<< "The addresses of dozen indexed by 1 and 7 are: ";
    cout<< &dozen[1] << " and " << &dozen[7];

    return 0;
}
