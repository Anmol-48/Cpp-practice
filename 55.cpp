//Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.
//
//Return the sorted string. If there are multiple answers, return any of them.
//
// 
//
//Example 1:
//
//Input: s = "tree"
//Output: "eert"
//Explanation: 'e' appears twice while 'r' and 't' both appear once.
//So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.



#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int main()
{
	string s="tree";
	
	vector<int> freq;
	char temp;
	int n,i,j,val,k,pos,min;
	
	n=s.length();
	
	
	for(i=0;i<n;i++){
		val=1;
		freq.push_back(val);
		for(j=0;j<n;j++)
		if(s[i]==s[j] && j!=i)
		freq[i]=val+1;
	}
	
	for(i=0;i<n;i++)
	{
		min=(int)s[i];
		pos=i;
		
		for(j=i+1;j<n;j++)
		{
			if(freq[j]>=freq[pos]){
				temp=s[pos];
				s[pos]=s[j];
				s[j]=temp;
			}
			else if(min>((int)s[j])){
				min=(int)s[j];
				pos=j;
			}
		}
		
		if(pos!=i)
		{
			temp=s[pos];
			s[pos]=s[i];
			s[i]=temp;
		}
	}
	
	cout<<s;
	return 0;
}