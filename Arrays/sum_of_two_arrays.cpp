
#include<bits/stdc++.h>
using namespace std;

void sum_print(vector<int> a,vector<int> b,int m){
        vector<int> c;
        int carry = 0;
        
        for(int i=m-1;i>=0;i--){
            
            int tempo;
            tempo = (a[i]+b[i])%10;
            c.push_back(tempo+carry);
            if(a[i]+b[i] >= 10){
                carry = 1;
            }else{
                carry = 0;
            }
            
        }
        
        if(carry!=0){
            c.push_back(carry);
        }
        
        reverse(c.begin(),c.end());
        
        for(int i=0;i<c.size();i++){
            cout<<c[i]<<", ";
        }
        
        cout<<"END";
}

int main(){
    int m;
    cin>>m;
    vector<int> a;
    for(int i=0;i<m;i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    int n;
    cin>>n;
    vector<int> b;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        b.push_back(temp);
    }
    
    if(m>n){
        int k=m-n;
        while(k--){
            b.insert(b.begin(),0);
        }
        sum_print(a,b,m);
       
    }else{
        int k=n-m;
        while(k--){
            a.insert(a.begin(),0);
        }
        sum_print(a,b,n);
    }

}
