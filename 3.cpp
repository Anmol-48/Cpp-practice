//program to check best time to buy and sell a stock
#include<iostream>
using namespace std;

void buysell(int arr[],int n)
{
	int i,j,pos2,pos1,max=0;
	pos2=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[j]>arr[i] && ((arr[j]-arr[i])>max))
			{
				max=arr[j]-arr[i];
				pos1=i;
				pos2=j;
			}
		}
	}
	
	if(max==0)
	{
		cout<<"There is not any period so that you can able to make profit as the price of this stock goes down regularly";
	}
	else
	cout<<"Purchase at day "<<pos1+1<<" and sell at day "<<pos2+1<<" so you can make max profit "<<max<<endl;
}

int main()
{
	int n;
	cout<<"Enter the number of days:";
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++)
	{
		cout<<"Enter the "<<i+1<<" price:";
		cin>>a[i];
	}
	
	buysell(a,n);
	return 0;
}