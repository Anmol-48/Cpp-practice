//Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.
//
// 
//
//Example 1:
//
//Input: n = 2
//Output: [0,1,1]
//Explanation:
//0 --> 0
//1 --> 1
//2 --> 10


#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        int temp;
        
        for(int i=0;i<=n;i++)
        {
        	ans.push_back(0);
        	temp=i;
        	while(temp!=0){
        		if(temp%2!=0){
        			ans[ans.size()-1]+=1;
				}
				temp=temp/2;
			}
		}
		
		return ans;
    }
};

int main()
{
	Solution obj;
	vector<int> a;
	
	a=obj.countBits(5);
	
	for(int i=0;i<a.size();i++)
	{
		cout<<a[i];
	}
	
	return 0;
}