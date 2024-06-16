//Given the head of a singly linked list, reverse the list, and return the reversed list.
//
//Input: head = [1,2,3,4,5]
//Output: [5,4,3,2,1]



#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;

struct node{
	int data;
	struct node *ptr;
};

struct node* create_node(int val){
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	temp->ptr=NULL;
	return temp;	
}



int main(){
	struct node *head,*p1,*p2,*p3,*p4,*p5,*p6,*next;
	int n;
	vector<int> rev;
	
	p1=create_node(1);
	p2=create_node(2);
	p3=create_node(3);
	p4=create_node(4);
	p5=create_node(5);
	
	p1->ptr=p2;
	p2->ptr=p3;
	p3->ptr=p4;
	p4->ptr=p5;
	
	head=p1;
	
	next=head;
	while(next!=NULL){
		rev.push_back(next->data);
		next=next->ptr;
	}
	
	next=head;
	n=rev.size();
	for(int i=n-1;i>=0;i--){
		next->data=rev[i];
		next=next->ptr;
	}
	
	next=head;
	while(next!=NULL){
		cout<<next->data<<" ";
		next=next->ptr;
	}
	return 0;
}