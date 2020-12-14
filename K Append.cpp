

#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
};

Node* reverse(Node* &head,int k,int n){
	if(k==0){
		return head;
	}
	int i=1;
	Node* temp = head;
	Node* start = head;
	while(i!=(n-k)){
		temp=temp->next;
		i++;
	}

	Node* ss = temp->next;
	head = ss;
	temp->next = NULL;
	int c=1;
	while(c!=k){
		ss = ss->next;
		c++;
	}

	ss->next = start;
	return head;

}



void push(Node* &head,int newData){
	Node* newNode = new Node();
	newNode->next = NULL;
	newNode->data = newData;
	Node* temp = head;
	if(temp==NULL){
		head = newNode;
		return;
	}
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next = newNode;

}

void print(Node* head){
	Node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

int main(){
	int n,k;
	cin>>n;
	Node* head=NULL;
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		push(head,t);
	}

	cin>>k;

	//print(head);
	k=k%n;
	head = reverse(head,k,n);

	print(head);
}
