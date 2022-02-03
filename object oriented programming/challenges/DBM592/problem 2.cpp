#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));  // Initialize random number generator.
    int r=(rand() % 5);
    string m ;
    string word[]={"abdou","karim","mamadi","mamadi","mouba"};
    cout << word[r] << endl;
    cin >> m;
    if (m==word[r])
    cout << "correct";
    else
    cout << "fail";
    return 0;
}
