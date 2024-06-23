//Given two strings s and t, determine if they are isomorphic.
//
//Two strings s and t are isomorphic if the characters in s can be replaced to get t.
//
//All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.
//
// 
//
//Example 1:
//
//Input: s = "egg", t = "add"
//Output: true




#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string s="egg";
	string t="add";
	
	int i,j,n=s.length();
	char f,l;
	
	for(i=0;i<n;i++)
	{
		f=s[i];
		l=t[i];
		
		for(j=i+1;j<n;j++)
		{
			if((s[j]==f && t[j]!=l) || (s[j]!=f && t[j]==l)){
				cout<<"false";
				exit(0);
			}
		}
	}
	cout<<"true";
	return 0;
}