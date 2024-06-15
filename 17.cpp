//There is a programming language with only four operations and one variable X:
//
//++X and X++ increments the value of the variable X by 1.
//--X and X-- decrements the value of the variable X by 1.
//Initially, the value of X is 0.
//
//Given an array of strings operations containing a list of operations, return the final value of X after performing all the operations.
//
// 
//
//Example 1:
//
//Input: operations = ["--X","X++","X++"]
//Output: 1
//Explanation: The operations are performed as follows:
//Initially, X = 0.
//--X: X is decremented by 1, X =  0 - 1 = -1.
//X++: X is incremented by 1, X = -1 + 1 =  0.
//X++: X is incremented by 1, X =  0 + 1 =  1.


#include<iostream>
using namespace std;

int main()
{
	int res=0;
	
	string s[]={"--x","x++","x++"};
	
	int i,j,n;
	n=sizeof(s)/sizeof(s[0]);
	
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			if((s[i])[j]=='+'){
				res=res+1;
				break;
			}
			else if((s[i])[j]=='-'){
				res=res-1;
				break;
			}
			else{
				continue;
			}
		}
	}
	
	cout<<res;
	return 0;
}