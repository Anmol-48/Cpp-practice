//In a town, there are n people labeled from 1 to n. There is a rumor that one of these people is secretly the town judge.
//
//If the town judge exists, then:
//
//The town judge trusts nobody.
//Everybody (except for the town judge) trusts the town judge.
//There is exactly one person that satisfies properties 1 and 2.
//You are given an array trust where trust[i] = [ai, bi] representing that the person labeled ai trusts the person labeled bi. If a trust relationship does not exist in trust array, then such a trust relationship does not exist.
//
//Return the label of the town judge if the town judge exists and can be identified, or return -1 otherwise.
//
// 
//
//Example 1:
//
//Input: n = 2, trust = [[1,2]]
//Output: 2



class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<vector<int>> v;
        v.resize(n);
        
        for(int i=0;i<n;i++)
        {
           v[i].resize(n);
           for(int j=0;j<n;j++)
           {
                if(i==j)
                {
                    v[i][j]=1;
                }
                else{
                    v[i][j]=0;
                }
           }
        }
        
        for(int i=0;i<trust.size();i++)
        {
            v[trust[i][1]-1][trust[i][0]-1]=1;
        }

        int j,k;
        for(int i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(v[i][j]==0)
                {
                    break;
                }
            }
            if(j==n)
            {
                for(k=0;k<trust.size();k++)
                {
                    if(trust[k][0]==i+1 && trust[k][1]!=i+1)
                    {
                        break;
                    }
                }
                if(k==trust.size())
                {
                    return i+1;
                }
            }
        }

        return -1;
    }
};