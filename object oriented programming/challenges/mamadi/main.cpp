#include <iostream>
#include <stdlib.h>

using namespace std;



int main(){
    string color[] = {"spray gray" , "silver"};
    string processor[]={"2.3GHz i9","2.4GHz i9"};
    string ram[]={"16BG","32GB","64GB"};
    string storage[]={"1TB", "2TB","4TB","8TB"};

    cout<<"Choose your new MacBook Air \nand Select a finish"<<endl;
    char c;
    cout << "select a color: " << endl;
    cout << "A => " << color[0] << endl;
    cout << "B => " << color[1] << endl;
    cout << "Enter a color: ";
    cin >> c;
    string choice;
    if(c == 'A' || c == 'a')
    choice= color[0];
    else if (c=='B' || c=='b')
        choice= color[1];
    else{
        cout << "Invalid" << endl;
    exit(1);}

    double price =10499.00;
    int p,r,s;
    string process , memory , stockage;
    cout << "choose your processor: " << endl;
    cout<<"1 => i9 2.3GHz "<<processor[0]<<endl;
      cout<<"2 => i9 2.4GHz "<<processor[1]<<" add RM 800.00"<<endl;
      cout <<"Enter your Processor: i";
      cin>>p;
      if(p==1){
        price+=0;
        process = processor[0];}
        else if(p==2){
          price+=800;
          process = processor[1];}
            else{
              cout<<"The number is invalid"<<endl;
              exit(1);
            }

              cout<<"Choose Your RAM: "<<endl;
      cout<<"16 => "<<ram[0]<<endl;
      cout<<"32 => "<<ram[1]<<" add RM 1600.00"<<endl;
      cout<<"64 => "<<ram[2]<<" add RM 3200.00"<<endl;
      cout <<"Enter your Memory: ";
      cin>>r;
      if(r==16){
        price+=0;
        memory=ram[0];}
        else if(r==32){
          price+=1600;
          memory=ram[1];}
           else if(r==64){
          price+=3200;
          memory=ram[2];}
            else{
              cout<<"The number is invalide"<<endl;
              exit(1);
            }
            cout<<"Choose Your Storage: "<<endl;
      cout<<"1 => 1TB"<<endl;
      cout<<"2 => 2TB add RM 1600.00"<<endl;
      cout<<"3 => 4TB add RM 4000.00"<<endl;
      cout<<"4 => 8TB add RM 8800.00"<<endl;
      cout <<"Enter your Storage: ";
      cin>>s;
      if(s==1){
        price+=0;
        stockage=storage[0];}
        else if(s==2){
          price+=1600;
          stockage=storage[1];}
          else if(s==3){
            price+=4000;
            stockage=storage[2];}
            else if(s==4){
             price+=8800;
             stockage=storage[3];}
              else{
               cout<<"The number is invalide"<<endl;
               exit(1);
         }

         cout << endl;
         cout<<choice<<"\t\t\t"<<process<<"\t\t\t  "<<memory<<"\t\t\t"<<stockage<<endl;
      cout<<"___________________________________________________________________"<<endl;
      cout<<"Total\t\t\t\t\t\t\t\t\t\t\t\t      = RM "<<price<<endl<<endl<<endl;



}

