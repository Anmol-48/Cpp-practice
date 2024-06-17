//Given a valid parentheses string s, return the nesting depth of s. The nesting depth is the maximum number of nested parentheses.
//
// 
//
//Example 1:
//
//Input: s = "(1+(2*3)+((8)/4))+1"
//
//Output: 3
//
//Explanation:
//
//Digit 8 is inside of 3 nested parentheses in the string.



#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string s="(1+(2*3)+((8)/4))+1";
	
	int i,j,pos,n,res=0;
	n=s.length();
	
	for(i=0;i<n;i++){
		if(s[i]=='('){
			j=1;
			pos=0;
			while(s[i]!=')' || pos!=j)
			{
				i=i+1;
				if(s[i]=='('){
					res=res+1;
					j=j+1;
				}
				else if(s[i]==')'){
					pos=pos+1;
				}
				else{
					continue;
				}
			}
		}
	}
	
	cout<<res;
	return 0;
}