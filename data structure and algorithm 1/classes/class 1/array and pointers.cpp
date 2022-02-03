#include<iostream>
using namespace std;

int main(){
	int arr[] ={56,66,8,3,12,97};
	int *p; //declaring pointer
	p = arr; //assigning reference to array
	
	cout << "Elements in the array" << endl;
	
	for(int i=0;i<=5; i++){
		cout << p << "  ";
		p++;
	}
	
	return 0;
} 
-----------------------------------------------------------------------------------------

#include<iostream>
using namespace std;

int main(){
	int x,y,z;
	x=10;
	y=66;
	z=9;
	
	//array of pointers
	int *arr[3];
	arr[0] = &x;
	arr[1] = &y;
	arr[2] = &z;
	
	for(int i=0; i<=2; i++){
		cout << *arr[i] << "  " << endl;
	}
	
	return 0;
} 

-----------------------------------------------------------------------------------------

#include<iostream>
using namespace std;

int main(){
	int arr[2][3] = {8,55,77,5,1,3};
	cout << "Base address  " << arr << endl;
	cout << "Elements      Address     Content" << endl;
	cout << "arr[0][0] " << &arr[0][0] << "   "<< arr[0][0] << endl;
	cout << "arr[0][1] " << &arr[0][1] << "   "<< arr[0][1] << endl; 
	cout << "arr[0][2] " << &arr[0][2] << "   "<< arr[0][2] << endl; 
	cout << "arr[1][0] " << &arr[1][0] << "   "<< arr[1][0] << endl; 
	cout << "arr[1][1] " << &arr[1][1] << "   "<< arr[1][1] << endl; 
	cout << "arr[1][2] " << &arr[1][2] << "   "<< arr[1][2] << endl; 
		
	return 0;
} 

-----------------------------------------------------------------------------------------

