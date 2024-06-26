//You are given a string s representing an attendance record for a student where each character signifies whether the student was absent, late, or present on that day. The record only contains the following three characters:
//
//'A': Absent.
//'L': Late.
//'P': Present.
//The student is eligible for an attendance award if they meet both of the following criteria:
//
//The student was absent ('A') for strictly fewer than 2 days total.
//The student was never late ('L') for 3 or more consecutive days.
//Return true if the student is eligible for an attendance award, or false otherwise.
//
// 
//
//Example 1:
//
//Input: s = "PPALLP"
//Output: true
//Explanation: The student has fewer than 2 absences and was never late 3 or more consecutive days.




#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string s="PPALLL";
	int i,n,abs=0;
	
	n=s.length();
	for(i=0;i<n;i++)
	{
		if(i+2<=n-1 && (s[i]=='L' && s[i+1]=='L' && s[i+2]=='L')){
			cout<<"false";
			exit(0);
		}
		else if(s[i]=='A'){
			abs=abs+1;
			if(abs==2){
				cout<<"false";
				exit(0);
			}
		}		
		
	}
	
	cout<<"true";
	return 0;
}