

// Question from smart interviews

//Question link : https://www.hackerrank.com/contests/smart-interviews/challenges/si-zig-zag-level-order-of-tree




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    
    node(int d){
        data=d;
        left = NULL;
        right = NULL;
    }
};


node* insertAtBST(node* root,int d){
    if(root == NULL){
        return new node(d);
    }
    if(d<(root->data)){
        root->left = insertAtBST(root->left,d);
    }
    else{
        root->right = insertAtBST(root->right,d);
    }
    return root;
}

int height(node* root){
    if(root==NULL){
        return -1;
    }
    int h1 = height(root->left);
    int h2 = height(root->right);
    
    
    return max(h1+1,h2+1);
}



void levelorder(node* root){
    stack<node *> q;
    stack<node *> p;
    if(root==NULL){
        return;
    }
    q.push(root);
    while(1){
        while(!q.empty()){
            node* temp = q.top();
            q.pop();
            cout<<temp->data<<" ";
            if(temp->right){
                p.push(temp->right);
            }
            if(temp->left){
                p.push(temp->left);
            }
        }
        
        while(!p.empty()){
            node* temp= p.top();
            p.pop();
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        if(q.empty() && p.empty()){
            break;
        }
    }
    
    return;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        node* root = NULL;
        while(n--){
            int d;
            cin>>d;
            root = insertAtBST(root,d);
        }
        levelorder(root);
        cout<<"\n";
    }
    return 0;
}
