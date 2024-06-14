//You are given two strings s and t such that every character occurs at most once in s and t is a permutation of s.
//
//The permutation difference between s and t is defined as the sum of the absolute difference between the index of the occurrence of each character in s and the index of the occurrence of the same character in t.
//
//Return the permutation difference between s and t.
//
// 
//
//Example 1:
//
//Input: s = "abc", t = "bac"
//
//Output: 2
//
//Explanation:
//
//For s = "abc" and t = "bac", the permutation difference of s and t is equal to the sum of:
//
//The absolute difference between the index of the occurrence of "a" in s and the index of the occurrence of "a" in t.
//The absolute difference between the index of the occurrence of "b" in s and the index of the occurrence of "b" in t.
//The absolute difference between the index of the occurrence of "c" in s and the index of the occurrence of "c" in t.
//That is, the permutation difference between s and t is equal to |0 - 1| + |2 - 2| + |1 - 0| = 2.



#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string s="abc";
	
	string t="bac";
	
	int i,n,j,val,res=0;
	
	n=s.length();
	for(i=0;i<n;i++){
		
		for(j=0;j<t.length();j++){
			if(s[i]==t[j]){
				val=i-j;
				if(val<0){
					val=val*(-1);
				}
				res=res+val;
			}
		}
	}
	
	cout<<res;
	return 0;
}