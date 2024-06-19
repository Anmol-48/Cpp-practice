//Balanced strings are those that have an equal quantity of 'L' and 'R' characters.
//
//Given a balanced string s, split it into some number of substrings such that:
//
//Each substring is balanced.
//Return the maximum number of balanced strings you can obtain.
//
// 
//
//Example 1:
//
//Input: s = "RLRRLLRLRL"
//Output: 4
//Explanation: s can be split into "RL", "RRLL", "RL", "RL", each substring contains same number of 'L' and 'R'.




#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string s="RLRRLLRLRL";
	int i,n=s.length();
	int r,l,res=0;

	r=l=0;
	for(i=0;i<n;i++)
	{
		if(s[i]=='R'){
			r=r+1;
		}
		else{
			l=l+1;
		}
		
		if(r==l){
			res=res+1;
			r=0;
			l=0;
		}
	}
	
	cout<<res;
	return 0;
}