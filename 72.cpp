//You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.
//
//Return the merged string.
//
// 
//
//Example 1:
//
//Input: word1 = "abc", word2 = "pqr"
//Output: "apbqcr"
//Explanation: The merged string will be merged as so:
//word1:  a   b   c
//word2:    p   q   r
//merged: a p b q c r


class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s="";
        int i,j,k;
        i=0;
        j=0;
        while(i<=word1.length()-1 && j<=word2.length()-1)
        {
            if(k==0)
            {
                s=s+word1[i];
                i++;
                k=1;
            }
            else{
                s=s+word2[j];
                j++;
                k=0;
            }
        }

        if(k==1)
        {
            for(i=j;i<=word2.length()-1;i++)
            {
                s=s+word2[i];
            }
        }
        else{
            for(j=i;j<=word1.length()-1;j++)
            {
                s=s+word1[j];
            }
        }

        return s;
    }
};