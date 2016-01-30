#include <iostream>
using namespace std;
struct node
{
	node * lc;
	char data;
	node * rc;
};
node * l;
void store(node * &l)
{
	char c;
	cin>>c;
	if(c=='0')
	{
		return;
	}
	else
	{
		l=new node;
		l->rc=NULL;l->lc=NULL;
		l->data=c;
		store(l->lc);store(l->rc);
	}
}
void print(node * l)
{
	if(l==NULL)
	return;
	else
	{
		cout<<l->data<<" ";
		print(l->lc);print(l->rc);
	}
}
int height(node *l)
{
	int lh,rh;
	if(l==NULL)
	return -1;
	else
	{
		lh=height(l->lc);
		rh=height(l->rc);
	}
	if(lh>rh)
	return (lh+1);
	else 
	return (rh+1);
}
int main()
{
	int a[20];
	store(l);
	print(l);
	cout<<l->lc->lc->data<<l->rc->data<<endl;
	cout<<height(l);
	return 0;
}
