//inorder traversal of binary tree
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node* create_node(int x)	//creation of nodes of the tree
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->left=temp->right=NULL;
	return temp;
}

void inorder(struct node *root)	// inoredr traversal using recursion
{
	if(root!=NULL)
	{
		cout<<root->data<<" ";
		inorder(root->left);
		inorder(root->right);
	}
}
int main()
{
	struct node *root,*t1,*t2,*t3,*t4;
	root=create_node(10);
	t1=create_node(20);
	t2=create_node(30);
	t3=create_node(40);
	t4=create_node(50);
	
	root->left=t1;
	root->right=t2;
	t1->left=t3;
	t2->left=t4;
	
	inorder(root);
	return 0;
}