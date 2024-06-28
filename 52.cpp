//Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
//
// 
//
//Example 1:
//
//Input: haystack = "sadbutsad", needle = "sad"
//Output: 0
//Explanation: "sad" occurs at index 0 and 6.
//The first occurrence is at index 0, so we return 0.



#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string haystack="sadbutsad";
	string needle="sad";
	
	int i,j,n1,n2;
	
	n1=haystack.length();
	n2=needle.length();
	
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			if(haystack[i+j]!=needle[j]){
				break;
			}
		}
		
		if(j==n2)
		{
			cout<<i;
			exit(0);
		}
	}
	
	cout<<"-1";
	return 0;
}