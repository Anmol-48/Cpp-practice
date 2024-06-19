//You are given a 0-indexed integer array nums of even length and there is also an empty array arr. Alice and Bob decided to play a game where in every round Alice and Bob will do one move. The rules of the game are as follows:
//
//Every round, first Alice will remove the minimum element from nums, and then Bob does the same.
//Now, first Bob will append the removed element in the array arr, and then Alice does the same.
//The game continues until nums becomes empty.
//Return the resulting array arr.
//
// 
//
//Example 1:
//
//Input: nums = [5,4,2,3]
//Output: [3,2,5,4]
//Explanation: In round one, first Alice removes 2 and then Bob removes 3. Then in arr firstly Bob appends 3 and then Alice appends 2. So arr = [3,2].
//At the begining of round two, nums = [5,4]. Now, first Alice removes 4 and then Bob removes 5. Then both append in arr which becomes [3,2,5,4].




#include<iostream>
#include<vector>
using namespace std;

int main(){
	int a[]={5,4,2,3};
	
	int al,bob,i,j,f,l,n=sizeof(a)/sizeof(a[0]);
	vector<int> res;
	res.clear();
	
	while(res.size()!=n)
	{
		if(a[0]<=a[1]){
			al=a[0];
			f=0;
			l=1;
			bob=a[1];
		}
		else{
			al=a[1];
			f=1;
			l=0;
			bob=a[0];
		}
		
		for(j=2;j<n;j++)
		{
			if(a[j]<al){
				bob=al;
				l=f;
				al=a[j];
				f=j;
			}
			else if(a[j]<bob){
				bob=a[j];
				l=j;
			}
		}
		
		a[f]=999;
		a[l]=999;
		res.push_back(bob);
		res.push_back(al);
	}
	
	for(i=0;i<n;i++){
		cout<<" "<<res[i];
	}
	return 0;
}