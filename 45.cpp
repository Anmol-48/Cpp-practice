//Given the head of a singly linked list, return true if it is a 
//palindrome
// or false otherwise.
// Example 1.
// Input: head = [1,2,2,1]
//Output: true



#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	struct node *next;	
};

struct node* create_node(int val){
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	temp->next=NULL;
	return temp;
}

int main()
{
	int a[]={1,2,2,1};
	int n=sizeof(a)/sizeof(a[0]);
	struct node *head,*ptr[n],*temp;
	int ans[n],i;
	
	for(i=0;i<n;i++)
	{
		ptr[i]=create_node(a[i]);	
	}	
	
	head=ptr[0];
	for(i=0;i<n-1;i++)
	{
		ptr[i]->next=ptr[i+1];
	}
	
	temp=head;
	i=0;
	while(temp!=NULL)
	{
		ans[i]=temp->data;
		temp=temp->next;
		i=i+1;
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]!=ans[n-1-i]){
			break;
		}
	}
	
	if(i==n){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	return 0;
}