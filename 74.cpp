//The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
//
//Given two integers x and y, return the Hamming distance between them.
//
// 
//
//Example 1:
//
//Input: x = 1, y = 4
//Output: 2
//Explanation:
//1   (0 0 0 1)
//4   (0 1 0 0)
//       ?   ?
//The above arrows point to positions where the corresponding bits are different.


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        vector<int> a,b;
		int ans=0;
        while(x!=0)
        {
            a.push_back(x%2);
            x=x/2;
            cout<<a[a.size()-1]<<endl;
        }
        while(y!=0)
        {
        	b.push_back(y%2);
        	y=y/2;
        	cout<<b[b.size()-1]<<endl;
		}
		
		reverse(a.begin(),a.end());
		reverse(b.begin(),b.end());	
			
		if(a.size()<b.size()){
			for(int i=0;i<a.size();i++)
			{
				if(a[i]!=b[b.size()-a.size()+i]){
					ans=ans+1;
				}
			}
			for(int j=0;j<(b.size()-a.size());j++)
			{
				if(b[j]==1)
				{
					ans=ans+1;
				}
			}
		}
		else if(a.size()>b.size())
		{
			for(int i=0;i<b.size();i++)
			{
				if(b[i]!=a[a.size()-b.size()+i]){
					ans=ans+1;
				}
			}
			
			for(int j=0;j<(a.size()-b.size());j++)
			{
				if(a[j]==1)
				{
					ans=ans+1;
				}
			}
		}
		else{
			for(int i=0;i<a.size();i++)
			{
				if(a[i]!=b[i]){
					ans=ans+1;
				}
			}
		}
		return ans;
    }
};

int main()
{
	int a,b;
	a=1;
	b=4;
	Solution obj;
	cout<<obj.hammingDistance(a,b);
	return 0;
}