#include<iostream>
using namespace std;

int main(){
	
	int n,temp,rem,rev=0;
	
	cout<<"Enter the number:";
	cin>>n;
	
	temp=n;
	while(temp!=0){
		rem=temp%10;
		rev=rem+rev*10;
		temp=temp/10;
	}
	
	cout<<rev;
	if(n<0){
		cout<<"False";
	}
	else{
		if(rev==n){
			cout<<"True";
		}
		else{
			cout<<"False";
		}
	}
	return 0;
}