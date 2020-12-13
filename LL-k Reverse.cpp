
#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
};

Node* reverse(Node* &head,int k){
	Node* curr = head;
	Node* prev = NULL;
	Node* next = NULL;
	int counter = 0;
	while(curr!=NULL && counter<k){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
		counter++;
	}

	if(next!=NULL){
		head->next = reverse(next,k);
	}

	return prev;
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
	cin>>n>>k;
	Node* head=NULL;
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		push(head,t);
	}

	//print(head);

	head = reverse(head,k);

	print(head);
}
