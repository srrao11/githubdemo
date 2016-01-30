#include<iostream>
using namespace std;
struct btnode
{
	int data;
	btnode *lchild;
	btnode *rchild;
};
typedef struct btnode *bstptr;
void insert(bstptr &t,int k)
{
	
	if(t==NULL)
	{cout<<"*";
		t= new btnode;
		t->data=k;
		t->lchild=NULL;
		t->rchild=NULL;
	}
	else if(t->data>k)
	insert(t->lchild,k);
	else if(t->data<k)
	insert(t->rchild,k);

}
void DLR(bstptr &t)
{
	if(t==NULL)
	return;
	else
	{
		cout<<t->data<<" ";
		DLR(t->lchild);
		DLR(t->rchild);
	}
}
void LDR(bstptr &t)
{
	if(t==NULL)
	return;
	else
	{
		LDR(t->lchild);
		cout<<t->data<<" ";
		LDR(t->rchild);
	}
}
void LRD(bstptr &t)
{
	if(t==NULL)
	return;
	else
	{
		LRD(t->lchild);
		LRD(t->rchild);
		cout<<t->data<<" ";
	}
}
int main()
{
	bstptr t;int n;
	t=NULL;
	cout<<"enter:";
	cin>>n;
	while(n!=-1)
	{
		insert(t,n);
		cout<<"enter:";
		cin>>n;
	}
	
		DLR(t);
		cout<<endl;
		LDR(t);
		cout<<endl;
		LRD(t);
}
