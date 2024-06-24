//Given an integer n, return true if it is a power of two. Otherwise, return false.
//
//An integer n is a power of two, if there exists an integer x such that n == 2x.
//
// 
//
//Example 1:
//
//Input: n = 1
//Output: true
//Explanation: 20 = 1
//Example 2:
//
//Input: n = 16
//Output: true
//Explanation: 24 = 16



#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n=16;
	
	if(n==1){
		cout<<"true";
	}
	else if(n%2==0){
		
		for(int i=0;i<n/2;i++){
			if(pow(2,i)==n){
				cout<<"true";
				exit(0);
			}
		}
		cout<<"false";
	}
	else{
		cout<<"false";
	}
	return 0;
}