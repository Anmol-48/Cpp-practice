//Given the root node of a binary search tree and two integers low and high, return the sum of values of all nodes with a value in the inclusive range [low, high].
//Input: root = [10,5,15,3,7,null,18], low = 7, high = 15
//Output: 32
//Explanation: Nodes 7, 10, and 15 are in the range [7, 15]. 7 + 10 + 15 = 32.


#include<iostream>
#include<stdlib.h>
using namespace std;

int sum=0;
struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node* create_node(int val){
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	temp->left=NULL;
	temp->right=NULL;
	return  temp;
}

void fun(struct node *root,int l,int h){
	if(root==NULL)
	{
		return;	
	}	
	if(root->data>=l && root->data<=h)
	{
		sum=sum+root->data;
	}
	fun(root->left,l,h);
	fun(root->right,l,h);
}
int main()
{
	int a[]={10,5,15,3,7,-1,18};
	
	int n,l,h;
	l=7;
	h=15;
	n=sizeof(a)/sizeof(a[0]);
	struct node *head,*p[n];
	
	for(int i=0;i<n;i++)
	{
		if(a[i]!=-1){
			p[i]=create_node(a[i]);
		}
		
	}
	
	for(int i=0;i<n;i++)
	{
		if(a[i]!=-1){
			if(2*i+1<n && a[2*i+1]!=-1)
			{
				p[i]->left=p[2*i+1];
			}
			if(2*i+2<n && a[2*i+2]!=-1)
			{
				p[i]->right=p[2*i+2];
			}
		}
	}
	
	head=p[0];
	fun(head,l,h);
	
	cout<<sum;
	return 0;
}