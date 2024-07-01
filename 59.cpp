//leetcode
//Given a string s, partition the string into one or more substrings such that the characters in each substring are unique. That is, no letter appears in a single substring more than once.
//
//Return the minimum number of substrings in such a partition.
//
//Note that each character should belong to exactly one substring in a partition.
//
// 
//
//Example 1:
//
//Input: s = "abacaba"
//Output: 4
//Explanation:
//Two possible partitions are ("a","ba","cab","a") and ("ab","a","ca","ba").
//It can be shown that 4 is the minimum number of substrings needed.




class Solution {
public:
    int partitionString(string s) {
       int n,i,j,res=0;
       vector<char> ch;
       n=s.length();
       for(i=0;i<n;i++)
       {
            if(i==0)
            {
                ch.push_back(s[i]);
            }
            else{
                for(j=0;j<ch.size();j++)
                {
                    if(ch[j]==s[i]){
                        res=res+1;
                        ch.clear();
                        break;
                    }
                }
                ch.push_back(s[i]);
            }
       } 
       return res+1;
    }
};