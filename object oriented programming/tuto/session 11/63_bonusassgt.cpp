#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	ofstream outFile;
	outFile.open("test.txt");
	string fruit;
	float price;
	int stock;
	for (int i = 0; i < 5; ++i) {
		cout << "Enter name of fruit: "; cin >> fruit;
		cout << "Enter kgs in stock : "; cin >> stock;
		cout << "Enter price per kg : "; cin >> price;
		cout << endl;
		outFile << fruit << "\t" << stock << "\t" << price << endl;
	}
	outFile.close();
}

