#include<iostream>
using namespace std;

int main()
{
	int arr[]={5,1,6};
	int i,n,val,j,k,ans=0;
	int p,pos;
	n=sizeof(arr)/sizeof(arr[0]);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++){
			p=j+1;
			
			while(p+i<=n){
				val=arr[j];
				pos=p;
				
				for(k=0;k<i;k++)
				{
					val=val^arr[pos];
					pos=pos+1;
				}
				
				p=p+1;
				if(i==0){
					ans=ans+val;
					break;
				}
				else{
					ans=ans+val;
				}
			}
		}
	}
	
	cout<<"Result="<<ans;
	return 0;
}