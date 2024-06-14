//You are given a string s. The score of a string is defined as the sum of the absolute difference between the ASCII values of adjacent characters.
//
//Return the score of s.
//
// 
//
//Example 1:
//
//Input: s = "hello"
//
//Output: 13
//
//Explanation:
//
//The ASCII values of the characters in s are: 'h' = 104, 'e' = 101, 'l' = 108, 'o' = 111. So, the score of s would be |104 - 101| + |101 - 108| + |108 - 108| + |108 - 111| = 3 + 7 + 0 + 3 = 13.

#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string s="zaz";
	int i,n,val,res=0;
	
	n=s.length();
	for(i=0;i<n;i++){
		if(i+1<=(n-1)){
			val=(int)s[i]-(int)s[i+1];
			if(val<0){
				val=val*(-1);
				res=res+val;
			}
			else
			{
				res=res+val;
			}
		}
		else{
			break;
		}
	}
	
	cout<<res;
	return 0;
}