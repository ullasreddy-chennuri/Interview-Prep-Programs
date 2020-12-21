
// Question link : https://www.hackerrank.com/contests/smart-interviews/challenges/si-stock-span/problem


#include<bits/stdc++.h>
using namespace std;

void stockSpan(int prices[],int n,int span[]){
    stack<int>s;
    s.push(0);
    span[0]=1;
    for(int i=1;i<=n-1;i++){
        int currPri = prices[i];
        
        while(!s.empty() && prices[s.top()]<=currPri){
            s.pop();
        }
        
        if(!s.empty()){
            int prev_high = s.top();
            span[i] = i-prev_high;
        }else{
            span[i] = i+1;
        }
        
        s.push(i);
    }
}



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int prices[n];
        for(int i=0;i<n;i++){
            cin>>prices[i];
        }
        int span[n];
        stockSpan(prices,n,span);
        
        for(int i=0;i<n;i++){
            cout<<span[i]<<" ";
        }
        
        cout<<endl;
        
    }
    
}
