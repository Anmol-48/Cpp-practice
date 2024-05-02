/*Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.*/
#include<iostream>
using namespace std;

int fun(int a[],int pos,int n){
	int left,right,i;
	left=1;
	right=1;
	for(i=0;i<=pos-1;i++)
	{
		left=left*a[i];
	}
	
	for(i=pos+1;i<n;i++)
	{
		right=right*a[i];
	}
	
	return left*right;
}

int main()
{
	int a[]={5,7,8,9};
	int n=sizeof(a)/sizeof(a[1]);
	int ans[n],i;
	for(i=0;i<n;i++)
	{
		ans[i]=fun(a,i,n);
	}
	
	cout<<"[";
	for(i=0;i<n;i++)
	cout<<ans[i]<<",";
	cout<<"]";
	return 0;
}