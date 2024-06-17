//A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.
//
//A sentence can be shuffled by appending the 1-indexed word position to each word then rearranging the words in the sentence.
//
//For example, the sentence "This is a sentence" can be shuffled as "sentence4 a3 is2 This1" or "is2 sentence4 This1 a3".
//Given a shuffled sentence s containing no more than 9 words, reconstruct and return the original sentence.
//
// 
//
//Example 1:
//
//Input: s = "is2 sentence4 This1 a3"
//Output: "This is a sentence"
//Explanation: Sort the words in s to their original positions "This1 is2 a3 sentence4", then remove the numbers.




#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string gen,s="is2 sentence4 This1 a3";
	
	int prev,k,n=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==' '){
			n=n+1;
		}
	}
	
	gen="";
	n=n+1;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<s.length();j++)
		{
			if(i==s[j]-48){
				
				if(prev>j){
					prev=-1;
				}
				for(k=prev+1;k<j;k++){
					gen=gen+s[k];
				}
				gen=gen+" ";
			}
			else if(s[j]==' '){
				prev=j;
			}
		}
	}
	
	cout<<gen;
	return 0;
}