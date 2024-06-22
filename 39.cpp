// Given an array nums sorted in non-decreasing order, return the maximum between the number of positive integers and the number of negative integers.

// In other words, if the number of positive integers in nums is pos and the number of negative integers is neg, then return the maximum of pos and neg.
// Note that 0 is neither positive nor negative.

 

// Example 1:

// Input: nums = [-2,-1,-1,1,2,3]
// Output: 3
// Explanation: There are 3 positive integers and 3 negative integers. The maximum count among them is 3.



#include<iostream>
using namespace std;

int main()
{
	int a[]={5,20,66,1314};
	
	int n,pos,neg;
	n=sizeof(a)/sizeof(a[0]);
	
	neg=0;
	pos=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			pos=pos+1;
		}
		else if(a[i]==0){
			continue;
		}
		else{
			neg=neg+1;
		}
	}
	
	if(pos>neg){
		cout<<pos;
	}
	else{
		cout<<neg;
	}
	return 0;
}