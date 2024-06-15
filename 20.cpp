//Given two integers, num and t. A number is achievable if it can become equal to num after applying the following operation:
//
//Increase or decrease the number by 1, and simultaneously increase or decrease num by 1.
//Return the maximum achievable number after applying the operation at most t times.
//
// 
//
//Example 1:
//
//Input: num = 4, t = 1
//
//Output: 6


#include<iostream>
using namespace std;

int main(){
	
	int num=4;
	int i,t=1;
	
	//num=-2    -2+2   
	
	num=num+t*2;
	cout<<num;
	return 0;
}