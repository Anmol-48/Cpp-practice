#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(int s=1;s<=n-i;s++)
		{
			cout<<" ";
		}
		
		for(j=1;j<=i;j++)
		{
			if(j==1 || j==i || i==n)
			{
				cout<<"* ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	return 0;
}