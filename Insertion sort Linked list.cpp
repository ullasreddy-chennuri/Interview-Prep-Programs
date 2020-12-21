#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
};

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

void sortInsert(Node* &sorted,Node *newnode){

	Node *curr;
	if(sorted == NULL || sorted->data >= newnode->data ){
		newnode->next =  sorted;
		sorted = newnode;
	}else{
		curr = sorted;
		while( curr->next != NULL && curr->next->data < newnode->data){
			curr = curr->next;
		}
		newnode->next = curr->next;
		curr->next = newnode;
	}
}

void insertion_sort(Node* &head){

	Node *sorted = NULL;

	Node* curr = head;
	while(curr!=NULL){
		Node *next = curr->next;
		sortInsert(sorted,curr);
		curr = next;
	}

	head = sorted;
}

int main(){
	int n;
	cin>>n;
	Node* head = NULL;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		push(head,temp);
	}

	insertion_sort(head);
	print(head);
}
