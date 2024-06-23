//Given an array nums of size n, return the majority element.
//
//The majority element is the element that appears more than ?n / 2? times. You may assume that the majority element always exists in the array.
//
// 
//
//Example 1:
//
//Input: nums = [3,2,3]
//Output: 3



#include<iostream>
using namespace std;

int main()
{
	int a[]={3,2,3};
	
	int n,count,i,j,ans,prev;
	
	prev=0;
	n=sizeof(a)/sizeof(a[0]);
	
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[j]==a[i]){
				count=count+1;
			}
		}
		if(count>prev){
			ans=a[i];
			prev=count;
		}
	}
	
	cout<<ans;
	return 0;
}