// Given a valid (IPv4) IP address, return a defanged version of that IP address.

// A defanged IP address replaces every period "." with "[.]".

 

// Example 1:

// Input: address = "1.1.1.1"
// Output: "1[.]1[.]1[.]1"

#include<iostream>
#include<string.h>
using namespace std;

int main(){
	
	string s="25.100.11.15.67";
	string f,l;
	
	int i,j,n;
	
	
	for(i=0;i<s.length();i++){
		if(s[i]=='.'){
			f="";
			l="";
			
			for(j=0;j<=i-1;j++){
				f=f+s[j];
			}
			for(j=i+1;j<s.length();j++){
				l=l+s[j];
			}
			
			s=f+"[.]"+l;
			
			i=i+2;
		}
	}
	
	cout<<s<<endl;
	return 0;
}