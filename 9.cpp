#include<iostream>
#include<string.h>
using namespace std;

int main(){
	
	int i,n,res=0;
	string s1;
	getline(cin,s1);
	
	n=s1.length();
	int s[n];
	
//	cout<<n;
	for(i=0;i<n;i++){
		if(s1[i]=='I'){
			s[i]=1;
		}
		else if(s1[i]=='V'){
			s[i]=5;
		}
		else if(s1[i]=='X'){
			s[i]=10;
		}
		else if(s1[i]=='L'){
			s[i]=50;
		}
		else if(s1[i]=='C'){
			s[i]=100;
		}
		else if(s1[i]=='D'){
			s[i]=500;
		}
		else if(s1[i]=='M'){
			s[i]=1000;
		}
		else{
			cout<<"Invalid\n";
			exit(0);
		}
	}
	
	for(i=0;i<n;i++)
	{
		switch (s[i]){
			case 1:
				if(s[i+1]>s[i] && i<n){
					res=res-1;
				}
				else{
					res=res+1;
				}
				break;
			
			case 5:
				if(s[i+1]>s[i] && i<n){
					res=res-5;
				}
				else{
					res=res+5;
				}
				break;
			
			case 10:
				if(s[i+1]>s[i] && i<n){
					res=res-10;
				}
				else{
					res=res+10;
				}
				break;
				
			case 50:
				if(s[i+1]>s[i] && i<n){
					res=res-50;
				}
				else{
					res=res+50;
				}
				break;
			
			case 100:
				if(s[i+1]>s[i] && i<n){
					res=res-100;
				}
				else{
					res=res+100;
				}
				break;
			
			case 500:
				if(s[i+1]>s[i] && i<n){
					res=res-500;
				}
				else{
					res=res+500;
				}
				break;
			
			case 1000:
				if(s[i+1]>s[i] && i<n){
					res=res-1000;
				}
				else{
					res=res+1000;
				}
				break;
			
		}
	}
	
	cout<<res;
	return 0;
}