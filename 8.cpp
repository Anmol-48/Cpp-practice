#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void fun(int arr[],int rep,int n){
	
	vector<int> rep_item;
	int i,j,k;
	
	for(i=0;i<n;i++)
	{
		k=1;
		for(j=0;j<n;j++)
		{
			if(arr[j]==arr[i] && i!=j){
				k=k+1;
			}
		}
		if(k>rep && find(rep_item.begin(),rep_item.end(),arr[i])==rep_item.end()){
			rep_item.push_back(arr[i]);
		}
	}
	
	cout<<"Items that appear more than "<<rep<<" time are:";
	for(i=0;i<rep_item.size();i++)
	{
		cout<<rep_item[i]<<endl;
	}
}

int main()
{
	int a[]={5,5,6,6,6,7,8};
	int rep;
	cout<<"Enter the number of times an item is allowed to repeat:";
	cin>>rep;
	fun(a,rep,(sizeof(a)/sizeof(a[0])));
	return 0;
}