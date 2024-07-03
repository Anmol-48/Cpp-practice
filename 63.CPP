//LEETCODE

//Given a string s, find the length of the longest 
//substring
// without repeating characters.
//
// 
//
//Example 1:
//
//Input: s = "abcabcbb"
//Output: 3
//Explanation: The answer is "abc", with the length of 3.
//Example 2:
//
//Input: s = "bbbbb"
//Output: 1
//Explanation: The answer is "b", with the length of 1.


#include<iostream>
#include<string.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string res="";
        int ans,n=s.length();

        ans=0;
        for(int i=0;i<n;i++)
        {
            if(i==0){
                res=res+s[i];
            }
            else{
                for(int j=0;j<res.length();j++)
                {
                    if(res[j]==s[i]){

                        if(ans<res.length())
                        {
                            ans=res.length();
                        }

                        string temp="";
                        for(int l=j+1;l<res.length();l++)
                        {
                            temp=temp+res[l];
                        }
                        res=temp;
                        break;
                    }
                }
                res=res+s[i];
            }
            cout<<res<<endl;
        }

        if(ans<res.length()){
            ans=res.length();
        }
        return ans;
    }
};

int main()
{
	string a="bbbbb";
	int answer;
	Solution obj;
	answer=obj.lengthOfLongestSubstring(a);
	
	cout<<answer;
	return 0;
}