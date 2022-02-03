// Exercise 1
//Declare an array to store a series of 12 numbers and display an output in a table
/*#include <iostream>
#include <iomanip>

using std::setw;

using namespace std;

int main( )
{
int a[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
int index;
cout << "Index " << setw(10) << "Content" << setw(35) << "Address"<< setw(3) << endl;
for (index = 0; index < 12; index++)
cout << index << setw(10) << a[index] << setw(35) << &a[index] <<setw(3) << endl ;
cout << endl;

return 0;
}

//Declare a pointer based class or structure and assigned a series of 12 numbers and display the output

struct point
{
int x;
};
int main( )
{

struct point a[12];
struct point *b=&a[12];
int index;
for (index = 0; index < 12; index++)
b[index].x = index+1;


cout << "Index " << setw(10) << "Content" << setw(35) << "Address"<< setw(3) << endl;
for (index = 0; index < 12; index++)
cout << index << setw(10) << b[index].x << setw(35) << b+index <<setw(3) << endl ;
b++;
cout << endl;
return 0;
}

//The nature of addresses in both the cases is 4 bits for integer represented in each values

// EXERCISE 2

#include<iostream>
using namespace std;

int main(){
    int arr[5] ;
    cout<<"Enter five integers: ";
    for(int i=0;i<5;i++){
        cin >> arr[i];
   }

   cout<<"Printing array ... \n";
   for(int i=0;i<5;i++){
        cout<<"Index Value: "<<i
          <<", Content: "<<arr[i]<<endl;

   }
   return 0;
}
*/
//Exercise 3
#include<iostream>

using namespace std;

int main()

{

float arr[5];

// declare pointer variable

float *ptr;

cout << "Displaying address using arrays: " << endl;

for (int i = 0; i < 5; ++i){
cout << "&arr[" << i << "] = " << &arr[i] << endl;
}

// ptr = &arr[0]

ptr = arr;

cout<<"\nDisplaying address using pointers: "<< endl;

for (int i = 0; i < 5; ++i){
cout << "ptr + " << i << " = "<< ptr + i << endl;
}

return 0;

}


