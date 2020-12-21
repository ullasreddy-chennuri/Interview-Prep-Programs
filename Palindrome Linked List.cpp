
#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
};

Node* reverse(Node *head){
	Node* curr = head;
	Node* prev = NULL;
	Node* next = NULL;
	while(curr!=NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
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
	int n;
	cin>>n;
	Node* head = NULL;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		push(head,temp);
	}

	int mid;
	if(n%2==0){
		mid = n/2;
	}else{
		mid = (n/2)+1;
	}
	Node *temp=head,*midhead,*revhead;
	for(int i=0;i<mid;i++){
		temp=temp->next;
	}
	midhead = temp->next;
	temp->next=NULL;
	revhead = reverse(midhead);
	int flag = 0;

	while(head->next!=NULL && revhead->next!=NULL){
		if(head->data != revhead->data){
			flag=1;
			cout<<"false";
			break;
		}
	}
	if(flag == 0){
		cout<<"true";
	}
}
