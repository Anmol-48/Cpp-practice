#include<iostream>
using namespace std;

int main(){
	
	int n,i,j,temp;
	cout<<"Enter the size of the array:";
	cin>>n;
	
	int a[n];
	
	cout<<"Enter the elements of the array:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(j=0;j<n/2;j++)  // for swapping the positions of the array 
	{
		temp=a[j];
		a[j]=a[n-1-j];
		a[n-1-j]=temp;
	}
	
	cout<<"\nAfter swapping your array was: ";
	
	for(j=0;j<n;j++)   
	{
		cout<<a[j]<<" ";
	}
	return 0;
}