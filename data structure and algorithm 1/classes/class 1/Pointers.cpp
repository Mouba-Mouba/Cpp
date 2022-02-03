//#include <iostream>
//using namespace std;
//
//int main()
//{
////    // declare variables
////    int var1 = 3;
////    int var2 = 24;
////    int var3 = 17;
////
////    // print address of var1
////    cout << "Address of var1: "<< var1 << endl;
////
////    // print address of var2
////    cout << "Address of var2: " << var2 << endl;
////
////    // print address of var3
////    cout << "Address of var3: " << var3 << endl;
//    
//    
//    
////	int* pointVar;
////	int var;
////	var = 5;
////
////	// assign address of var to pointVar pointer
////	pointVar = &var;
////	
////	cout<<&var<<endl;
////	cout<<pointVar<<endl;
//	
//	
//}
//
////----------------------------------------------------------------------------------------------------------------------
//
//#include <iostream>
//using namespace std;
//int main() {
//    int var = 5;
//
//    // declare pointer variable
//    int* pointVar;
//
//    // store address of var
//    pointVar = &var;
//
//    
//    cout << "var = " << var << endl; 
//
//    
//    cout << "Address of var (&var) = " << &var << endl
//         << endl;
//
//    
//    cout << "pointVar = " << pointVar << endl;
//
//   
//    cout << "Content of the address pointed to by pointVar (*pointVar) = " << *pointVar << endl;
//    
//    return 0;
//}

//-------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;
int main() {
    int var = 5;
    int* pointVar;

    // store address of var
    pointVar = &var;

    // print var
    cout << "var = " << var << endl;

    // print *pointVar
    cout << "*pointVar = " << *pointVar << endl
         << endl;

    cout << "Changing value of var to 7:" << endl;

    // change value of var to 7
    var = 7;

    // print var
    cout << "var = " << var << endl;

    // print *pointVar
    cout << "*pointVar = " << *pointVar << endl
         << endl;

    cout << "Changing value of *pointVar to 16:" << endl;

    // change value of var to 16
    *pointVar = 16;

    // print var
    cout << "var = " << var << endl;

    // print *pointVar
    cout << "*pointVar = " << *pointVar << endl;
    return 0;
}
