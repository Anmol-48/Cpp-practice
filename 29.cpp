//Given an n x n binary matrix image, flip the image horizontally, then invert it, and return the resulting image.
//
//To flip an image horizontally means that each row of the image is reversed.
//
//For example, flipping [1,1,0] horizontally results in [0,1,1].
//To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0.
//
//For example, inverting [0,1,1] results in [1,0,0].
// 
//
//Example 1:
//
//Input: image = [[1,1,0],[1,0,1],[0,0,0]]
//Output: [[1,0,0],[0,1,0],[1,1,1]]
//Explanation: First reverse each row: [[0,1,1],[1,0,1],[0,0,0]].
//Then, invert the image: [[1,0,0],[0,1,0],[1,1,1]]




#include<iostream>
using namespace std;

int main()
{
	int a[3][3]={{1,1,0},{1,0,1},{0,0,0}};
	
	int i,temp,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3/2;j++){
			
			temp=a[i][j];
			a[i][j]=a[i][2-j];
			a[i][2-j]=temp;
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
			if(a[i][j]==0){
				a[i][j]=1;
			}
			else{
				a[i][j]=0;
			}
		}
	}
	
	cout<<"{ ";
	for(i=0;i<3;i++){
		
		if(i!=0){
			cout<<" , ";	
		}
		cout<<"{";
		for(j=0;j<3;j++){
			if(j!=0){
				cout<<",";
			}
			cout<<a[i][j];
		}
		cout<<"}";
	}
	cout<<"}";
	return 0;
}