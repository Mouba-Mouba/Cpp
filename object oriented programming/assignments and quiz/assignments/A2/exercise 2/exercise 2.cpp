//Mohamed Moubarak Mohamed Misbahou Mkouboi 1820705
//Section: 1
//Exercise 2


#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ifstream inFile;
	ofstream outFile;

	int t[3][4];
	int a[12];
	int i,j,m=0,n=0;
	int change;
	int Min = a[n];
	int num = n;

	inFile.open("training.txt");
	outFile.open("result.txt");


	for(i=0;i<3;i++)
	{

		for(j=0;j<4;j++)
		{
			inFile>>t[i][j];

		}
	}

	if(!inFile)
	{
		cout<<"Cannot open input file. "<<endl;
		return 1;
	}


	for(i=0;i<3;i++)
	{

		for(j=0;j<4;j++,n++)
		{
			a[n] = t[i][j];

		}
	}


	for(n=0;n<12;n++)
	{
		Min = a[n];
		num = n;
		for(m=n+1;m<12;m++)
		{
			if(a[m] < Min)
			{
				Min = a[m];
				num = m;
			}
		}

		if(num != i)
		{
			change = a[num];
			a[num] = a[n];
			a[n] = change;
		}
		}


	cout<<"The ascending numbers is : "<<endl;

	for(n=0;n<12;n++)
	{
		cout<<a[n]<<'\t';
	}

	for(n=0;n<12;n++)
	{
		outFile<<a[n]<<'\n';

	}


	inFile.close();
	outFile.close();


	return 0;
}

