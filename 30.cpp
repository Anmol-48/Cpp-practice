//Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.
//
//Return the decimal value of the number in the linked list.
//
//The most significant bit is at the head of the linked list.
//
// 
//
//Example 1:
//
//
//Input: head = [1,0,1]
//Output: 5
//Explanation: (101) in base 2 = (5) in base 10




#include<iostream>
#include<stdlib.h>
#include<vector>
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
	struct node *head,*p1,*p2,*p3,*ptr;
	
	vector<int> arr;
	int i,j,n,pow,res=0;
	
	p1=create_node(1);
	p2=create_node(0);
	p3=create_node(1);
	
	p1->next=p2;
	p2->next=p3;
	
	head=p1;
	ptr=head;
	while(ptr!=NULL){
		arr.push_back(ptr->data);
		ptr=ptr->next;
	}	
	
	n=arr.size();
	for(i=n-1;i>=0;i--)
	{
		pow=1;
		for(j=1;j<=(n-1-i);j++)
		{
			pow=pow*2;
		}
		pow=pow*arr[i];
		res=res+pow;
	}
	
	cout<<res;
	return 0;
}