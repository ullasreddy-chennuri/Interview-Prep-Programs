
#include<bits/stdc++.h>
using namespace std;

void transferStack(stack<int> &s1,stack<int> &s2,int k){
    for(int i=0;i<k;i++){
        s2.push(s1.top());
        s1.pop();
    }
}

void reverseStack(stack<int> &s1){
    stack<int> s2;
    int n=s1.size();
    for(int i=0;i<n;i++){
        int t = s1.top();
        s1.pop();
        transferStack(s1,s2,n-1-i);
        s1.push(t);
        transferStack(s2,s1,n-1-i);
    }
}



int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    reverseStack(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
