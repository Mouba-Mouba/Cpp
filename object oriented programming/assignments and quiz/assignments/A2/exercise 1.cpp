//Mohamed Moubarak Mohamed Misbahou Mkouboi 1820705
//Section: 1
// Exercise 1

#include<iostream>
#include<string>
using namespace std;
int const d=3;
int const col=4;

int main(){
	int day[d];
	int record[d][col];
	int Max,loc,temp;
	int i,j,k;

	day[1]=1;
	day[2]=2;
	day[3]=3;


	for(i=0;i<d;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<"enter the time spent swimming in "<<i+1<<" day "<<j+1<<" break: ";
			cin>>record[i][j];

		}

	}

	for(i=0;i<d;i++)
	{
		for(j=0;j<col-1;j++)
		{
			Max=j;
			for(loc=j+1;j<loc;loc++)
			if(record[i][loc]>record[i][Max])
			Max=loc;

			temp=record[i][Max];
			record[i][Max]=record[i][j];
			record[i][j]=temp;
		}
	}



	for(k=0;k<3;k++){
	cout<<day[k];
	for(i=0;i<d+1;i++)
	for(j=0;j<col+1;j++)
	{
		cout<<record[k][j];
	}
	cout<<endl;}






	return 0;

}

