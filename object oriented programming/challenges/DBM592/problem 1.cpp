#include <iostream>
#include <stdlib.h>


using namespace std;

int main()
{
    char t;
    int c =0;
   char word[]= {'m','o','u','b','a'};
   cout << "guess a word 5 times: "<< endl;
    do{
        cout << "word 1: ";
        cin >> t;
        if(t!=word[0]){
            c++;
        cout << "try again "<< endl;}
    }while(t!= word[0]&& c<5);
    if (c == 5){
        cout << "you lost"<<endl;
         exit(1);}
    do{
        cout << "word 2: ";
        cin >> t;
        if(t!=word[1]){
            c++;
         cout << "try again "<< endl;}
    }while(t!= word[1]&& c<5);
    if (c == 5){
        cout << "you lost"<<endl;
         exit(1);}
    do{
        cout << "word 3: ";
        cin >> t;
        if(t!=word[2]){
            c++;
         cout << "try again "<< endl;}
    }while(t!= word[2]&& c<5);
    if (c == 5){
        cout << "you lost"<<endl;
         exit(1);}
    do{
        cout << "word 4: ";
        cin >> t;
        if(t!=word[3]){
            c++;
         cout << "try again "<< endl;}
    }while(t!= word[3]&& c<5);
    if (c == 5){
        cout << "you lost"<<endl;
         exit(1);}
    do{
        cout << "word 5: ";
        cin >> t;
        if(t!=word[4]){
            c++;
         cout << "try again "<< endl;}
    }while(t!= word[4]&& c<5);
    if (c == 5){
        cout << "you lost"<<endl;
         exit(1);}
    cout << "congratulations "<< endl;
}
