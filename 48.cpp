//You are given an n x n integer matrix grid.
//
//Generate an integer matrix maxLocal of size (n - 2) x (n - 2) such that:
//
//maxLocal[i][j] is equal to the largest value of the 3 x 3 matrix in grid centered around row i + 1 and column j + 1.
//In other words, we want to find the largest value in every contiguous 3 x 3 matrix in grid.
//
//Return the generated matrix.
//Input: grid = [[9,9,8,1],[5,6,2,6],[8,2,6,4],[6,2,2,2]]
//Output: [[9,9],[8,6]]
//Explanation: The diagram above shows the original matrix and the generated matrix.
//Notice that each value in the generated matrix corresponds to the largest value of a contiguous 3 x 3 matrix in grid.



#include<iostream>
using namespace std;

int main()
{
	int a[4][4]={{9,9,8,1},{5,6,2,6},{8,2,6,4},{6,2,2,2}};
	
	int i,j,k,l,max,n=4;
	int res[n-2][n-2];
	
	for(i=0;i<n-2;i++)
	{
		for(j=0;j<n-2;j++)
		{
			max=a[i+1][j+1];
			for(k=i;k<=i+2;k++)
			{
				for(l=j;l<=j+2;l++)
				{
					if(a[k][l]>max){
						max=a[k][l];
					}
				}
			}
			res[i][j]=max;
		}
	}
	
	
	for(i=0;i<n-2;i++)
	{
		for(j=0;j<n-2;j++)
		{
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}