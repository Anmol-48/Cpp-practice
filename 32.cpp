/*Build a complete binary tree from given data a[]={4,10,3,5,1,16,19,23,40}
                  4
                /   \
               10     3
              /  \   /  \
             5   1  16   19
           /   \
         23    40

*/

#include<iostream>
#include<stdlib.h>
using namespace std;

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
	return temp;
}
int main()
{
	int a[]={4,10,3,5,1,16,19,23,40};
	int i,n=sizeof(a)/sizeof(a[0]);
	struct node *head,*p[n];
	
	for(i=0;i<n;i++){
		p[i]=create_node(a[i]);
	}
	
	head=p[0];
	
	cout<<"Complete binary tree from given data\n";
	cout<<"Head="<<head->data<<endl;
	for(i=0;i<n;i++)
	{
		if(p[i]->left==NULL && (2*i+1)<n){
			p[i]->left=p[2*i+1];
			cout<<p[i]->data<<"->left "<<p[2*i+1]->data;
		}
		
		if(p[i]->right==NULL && (2*i+2)<n){
			p[i]->right=p[2*i+2];
			cout<<", "<<p[i]->data<<"->right "<<p[2*i+2]->data;
		}
		cout<<endl;
	}
	
	return 0;
}