//Given an integer array nums and an integer k, return the number of pairs (i, j) where i < j such that |nums[i] - nums[j]| == k.
//
//The value of |x| is defined as:
//
//x if x >= 0.
//-x if x < 0.
// 
//
//Example 1:
//
//Input: nums = [1,2,2,1], k = 1
//Output: 4
//Explanation: The pairs with an absolute difference of 1 are:
//- [1,2,2,1]
//- [1,2,2,1]
//- [1,2,2,1]
//- [1,2,2,1]





#include<iostream>
using namespace std;

int main()
{
	int a[]={1,2,2,1};
	int t=1;
	int val,i,j,n,res=0;
	n=sizeof(a)/sizeof(a[0]);
	
	for(int i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++){
			val=a[i]-a[j];
			if(val<0){
				val=val*(-1);
			}
			if(val==t){
				res=res+1;
			}
		}
	}
	
	cout<<res;
	return 0;
}