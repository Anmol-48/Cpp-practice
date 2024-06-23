//Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.
//
// 
//
//Example 1:
//
//Input: nums = [1,2,3,1], k = 3
//Output: true




#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string s="false";
	int a[]={1,2,3,1};
	
	int n,check,i,j,k=3;
	
	n=sizeof(a)/sizeof(a[0]);
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			check=i-j;
			if(check<0){
				check=check*(-1);
			}
			if(a[i]==a[j] && check<=k)
			{
				s="true";
				break;
			}
		}
		
		if(j<n){
			cout<<s;
			exit(0);
		}
	}
	
	cout<<s;
	return 0;
}