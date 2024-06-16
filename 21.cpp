//Given n points on a 2D plane where points[i] = [xi, yi], Return the widest vertical area between two points such that no points are inside the area.
//
//A vertical area is an area of fixed-width extending infinitely along the y-axis (i.e., infinite height). The widest vertical area is the one with the maximum width.
//
//Note that points on the edge of a vertical area are not considered included in the area.
//Input: points = [[8,7],[9,9],[7,4],[9,7]]
//Output: 1



#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	int a[4][2]={{8,7},{9,9},{7,4},{9,7}};
	
	int i,j,f,k,n,pos,min,temp,res=0;
	
	vector<int> b;
	
	for(i=0;i<4;i++){
		b.push_back(a[i][0]);
		
		n=b.size();
		for(j=0;j<n;j++){
			min=b[j];
			pos=j;
			
			for(k=j+1;k<n;k++){
				if(b[k]<min){
					min=b[k];
					pos=k;
				}
			}
			
			if(pos!=j){
				temp=b[j];
				b[j]=min;
				b[pos]=temp;
			}
		}
		
	}
	
	for(k=1;k<n;k++){
		if((b[k]-b[k-1])>res){
			res=b[k]-b[k-1];
		}
	}
	
	cout<<"\nResult="<<res;
	return 0;
}