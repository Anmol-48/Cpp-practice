//A decimal number is called deci-binary if each of its digits is either 0 or 1 without any leading zeros. For example, 101 and 1100 are deci-binary, while 112 and 3001 are not.
//
//Given a string n that represents a positive decimal integer, return the minimum number of positive deci-binary numbers needed so that they sum up to n.
//
// 
//
//Example 1:
//
//Input: n = "32"
//Output: 3
//Explanation: 10 + 11 + 11 = 32




#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string s="27346209830709182346";
	
	int max,i,n=s.length();
		
	for(i=0;i<n;i++)
	{
		if(max<(s[i]-'0'))
		max=s[i]-'0';
	}
	
	cout<<max;
	return 0;
}