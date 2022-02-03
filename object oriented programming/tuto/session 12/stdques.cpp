#include <iostream>
#include <iomanip>

using namespace std;


 
void stat_list(float arr[] ,float *min,float *max,float *avg);

int main()
{
	int i;
	float list[10];
	float price;
	for(i=0;i<10;i++)
	{
		cout<<"Enter the price of the products: "<<endl;
		cin>>price;
	
	if(price==-1)
		break;
	else
		list[i]=price;
	}
float MIN, MAX, AVG;

MIN=MAX=AVG=0.0;
	
stat_list(list,&MIN,&MAX,&AVG);
	
	cout<<"Min "<<MIN<<endl;
	cout<<"Max "<<MAX<<endl;
	cout<<"Avg "<<AVG<<endl;
	
return 0;
}

void stat_list(float arr[] ,float *min,float *max,float *avg)
{
	int i=0;
	int count=0;
	float sum=0;
	*min = arr [i];
	*max = arr [i];

	for(i;i<10;i++)
	{

		if(*min>arr[i+1])
		*min=arr[i+1];
		
		if(*max<arr[i+1])
		*max=arr[i+1];
	
		sum=sum+arr[i];
		count ++;

	}
		*avg=sum/count;	
}
