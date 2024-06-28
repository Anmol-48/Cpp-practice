//For a string sequence, a string word is k-repeating if word concatenated k times is a substring of sequence. The word's maximum k-repeating value is the highest value k where word is k-repeating in sequence. If word is not a substring of sequence, word's maximum k-repeating value is 0.
//
//Given strings sequence and word, return the maximum k-repeating value of word in sequence.
//
// 
//
//Example 1:
//
//Input: sequence = "ababc", word = "ab"
//Output: 2
//Explanation: "abab" is a substring in "ababc".




#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string sequence="ababc";
	string word="ab";
	
	int i,j,n1,n2,res=0;
	
	n1=sequence.length();
	n2=word.length();
	
	for(i=0;i<n1;i++)
	{
		if(sequence[i]==word[0]){
			for(j=1;j<n2;j++)
			{
				if(sequence[i+j]!=word[j]){
					break;
				}
			}
			if(j==n2){
				res=res+1;
			}
		}
	}
	
	cout<<res;
	return 0;
}