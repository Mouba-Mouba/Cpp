#include<fstream>
#include <iostream>
using namespace std;

main ()
{
    struct fruits{
            string name;
            int kl;
            double price;
        };
        fruits details[14];
    cout << "Enter the details of five fruits:" <<endl;
    cin >> details[0].name >> details[1].kl >> details[2].price;
    cin >> details[3].name >> details[4].kl >> details[5].price;
    cin >> details[6].name >> details[7].kl >> details[8].price;
    cin >> details[9].name >> details[10].kl >> details[11].price;
    cin >> details[12].name >> details[13].kl >> details[14].price;

    ofstream outfile;

    outfile.open("test.txt");
    outfile << details[0].name << "\t" << details[1].kl << "\t" << details[2].price;
    outfile << endl;
    outfile << details[3].name << "\t" << details[4].kl << "\t" << details[5].price;
    outfile << endl;
    outfile << details[6].name << "\t" << details[7].kl << "\t" << details[8].price;
    outfile << endl;
    outfile << details[9].name << "\t" << details[10].kl << "\t" << details[11].price;
    outfile << endl;
    outfile << details[12].name << "\t" << details[13].kl << "\t" << details[14].price;
    outfile.close();
    return 0;
}
