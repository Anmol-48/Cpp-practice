//You are given an m x n binary matrix mat of 1's (representing soldiers) and 0's (representing civilians). The soldiers are positioned in front of the civilians. That is, all the 1's will appear to the left of all the 0's in each row.
//
//A row i is weaker than a row j if one of the following is true:
//
//The number of soldiers in row i is less than the number of soldiers in row j.
//Both rows have the same number of soldiers and i < j.
//Return the indices of the k weakest rows in the matrix ordered from weakest to strongest.
//
// 
//
//Example 1:
//
//Input: mat = 
//[[1,1,0,0,0],
// [1,1,1,1,0],
// [1,0,0,0,0],
// [1,1,0,0,0],
// [1,1,1,1,1]], 
//k = 3
//Output: [2,0,3]
//Explanation: 
//The number of soldiers in each row is: 
//- Row 0: 2 
//- Row 1: 4 
//- Row 2: 1 
//- Row 3: 2 
//- Row 4: 5 
//The rows ordered from weakest to strongest are [2,0,3,1,4].






#include<iostream>
using namespace std;

int main()
{
	int a[5][5]={{1,1,0,0,0},
 				{1,1,1,1,0},
 				{1,0,0,0,0},
 				{1,1,0,0,0},
 				{1,1,1,1,1}};
 	int n=5;
 	int pos,i,j,min,val,ans[n],k=3;
 
 	for(i=0;i<n;i++)
 	{
 		val=0;
		for(j=0;j<n;j++)
		{
			if(a[i][j]==1){
				val=val+1;
			}
		}
		ans[i]=val;	
	}
	
	while(1){
			min=ans[0];
			pos=0;
			for(j=1;j<n;j++)
			{
				if(ans[j]<min){
					min=ans[j];
					pos=j;
				}
			}
		
			if(pos!=0){
				ans[pos]=999;
				cout<<pos<<" ";
				k=k-1;
			}
			else{
				ans[0]=999;
				cout<<0<<" ";
				k=k-1;
			}
			if(k==0){
				break;
			}
	}
	
	
	return 0;
}