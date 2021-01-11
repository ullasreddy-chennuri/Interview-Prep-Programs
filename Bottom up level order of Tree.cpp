

// Question from Smart Interviews

//Question link : https://www.hackerrank.com/contests/smart-interviews/challenges/si-bottom-up-level-order-of-tree




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



void bottomlevelorder(node* root){
    queue<node *> q;
    stack<node *> p;
    if(root==NULL){
        return;
    }
    q.push(root);
    node *temp =new node(-1);
                while(!q.empty()){
                        int l = q.size();
                        while(l--){
                            node* t = q.front();
                            p.push(t);
                            q.pop();
                                
                                if(t->right){
                                    q.push(t->right);
                                }
                               if(t->left){
                                    q.push(t->left);
                                }
                        }
                        p.push(temp);

                }   
                p.pop();
                while(!p.empty()){
                
                node* te = p.top();
                 p.pop();
                if(te->data == -1){
                    cout<<endl;
                }else{
                    cout<<te->data<<" ";
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
        bottomlevelorder(root);
        cout<<"\n";
        cout<<"\n";
    }
    return 0;
}
