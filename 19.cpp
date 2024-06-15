//Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise, return the number of negative numbers in grid.
//
// 
//
//Example 1:
//
//Input: grid = [[4,3,2,-1],[3,2,1,-1],[1,1,-1,-2],[-1,-1,-2,-3]]
//Output: 8
//Explanation: There are 8 negatives number in the matrix.


#include<iostream>
using namespace std;

int main(){
	int res=0;
	int a[4][4]={{4,3,2,-1},{3,2,1,-1},{1,1,-1,-2},{-1,-1,-2,-3}};
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(a[i][j]<0){
				res=res+1;
			}
		}
	}
	
	cout<<res;
	return 0;
}