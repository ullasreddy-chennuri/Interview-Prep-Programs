

#include<bits/stdc++.h>
using namespace std;

class node{
	public:
	int data;
	node* next;
	

	node(int d)
	{
		data=d;
		next=NULL;
	}
};
void insertAttail(node*&head,int data){
	
	if(head==NULL)
	{
		head=new node(data);
		return;
	}
	node*temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=new node(data);
	return;
}
void buildList(node*& head,int n)
{
	int data;	
	while(n--)
	{
		cin>>data;
		insertAttail(head,data);
		
	}
	
}
node* merge(node*& head,node*& head1)
{
	if(head==NULL)
	return head1;
    else if(head1==NULL)
	return head;

	node*c ;
	if(head->data<=head1->data)
	{
		c=head;
		c->next=merge(head->next,head1);
	}
	else{
		c=head1;
		head1->next=merge(head,head1->next);
	}
	return c;
}
void print(node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        node* head=NULL;
	    node* head1=NULL;
		int n,m;
		cin>>n;
		buildList(head,n);
        cin>>m;
		buildList(head1,m);
		node* ans=merge(head,head1);
		print(ans);
	}
	return 0;
}
